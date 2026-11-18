# robarm-sw: rules for agents

Read the workspace `CLAUDE.md` (copied from `xdmod/launch/CLAUDE.md`) first. This file adds the
rules of this repo. Run every command from the workspace root.

## What this repo is

Zephyr firmware for the NUCLEO-G474RE (`app/`), our own devicetree bindings (`dts/bindings/`),
ztest suites (`tests/`), and the documents `sw-req`, `sw-arch`, `sw-api` (Doxygen),
`sw-test-spec`, `sw-test-report`, plus one firmware document per image in `docs/firmware/fw-<name>/`
(`fw-robarm-app`; registry `doc_dir`, tiacsys/xdmod#69 Q8, checked by CK-A7). The repo is a Zephyr module (`zephyr/module.yml`, D114).

## Build and test

```sh
curatrix run --use west-build -- west build -b nucleo_g474re -d build/robarm-sw/app/nucleo_g474re robarm-sw/app
curatrix run --use tests -- zephyr/scripts/twister -T robarm-sw/tests -p native_sim -O build/robarm-sw/twister
curatrix check robarm-sw --stage local
```

Build output goes only to `build/robarm-sw/`, never into the repo (CK-H2).
The Zephyr SDK is `.venv/opt/zephyr-sdk-1.0.1` (ARM toolchain only, D138); `curatrix env` sets
`ZEPHYR_SDK_INSTALL_DIR`.

## Rules

- **Trace IDs in the devicetree** go only into nodes of our own bindings (`robot,joint` with
  `trace-id`), never onto upstream nodes (D64f).
- **Code units** (`SW-IMPL`) carry `@xdid{...}` and must implement a SW design element; they may
  also satisfy a SW requirement directly (D77).
- **Test IDs** (`SW-TC`) come from the ledger and are written into the comment above each
  `ZTEST` by a tool (D80). A test that verifies a system requirement or interface belongs in
  robarm-integration (D115).
- SW and EE never link to each other: both link to the interfaces (`SYS-IF`) in robarm-syseng.

## Pitfalls

- Do not use `west build` without `-d build/robarm-sw/...`: the default `build/` folder would
  land inside the repo.
- Board files of our own go into `boards/` at the repo root (board_root); per-app overlays go
  into `app/boards/`.
- PR CI builds the firmware and runs the native_sim tests (D101), so they must pass without a
  board attached.
