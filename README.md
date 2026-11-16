# robarm-sw

Software of the robot arm example of [XDMOD](https://github.com/tiacsys/xdmod): Zephyr firmware
for the NUCLEO-G474RE board, its tests, and the SW documents.

Status: **skeleton** (Phase 4). A minimal application, one smoke test, the structure, the checks
and empty documents are in place; the content comes in Phase 6.

## Layout

| Path | What |
|---|---|
| `app/` | Zephyr application: `CMakeLists.txt`, `prj.conf`, `src/`, `boards/<board>.overlay` |
| `dts/bindings/` | our own devicetree bindings, e.g. `robot,joint` with a `trace-id` property |
| `zephyr/module.yml` | makes this repo a Zephyr module, so that Zephyr finds the bindings |
| `tests/<suite>/` | ztest suites (run on `native_sim` with Twister, later also on the board) |
| `docs/sw-req/` | SW Requirements Specification |
| `docs/sw-arch/` | SW Architecture and Design |
| `docs/sw-api/` | SW API and Implementation (Doxygen) |
| `docs/sw-test-spec/` | SW Test Specification |
| `docs/sw-test-report/` | SW Test Report |
| `ids.yaml` | ID ledger for `SW-*` IDs |
| `checks.yaml` | what `curatrix check robarm-sw` runs (docs, IDs, firmware build, tests) |
| `tools.yaml` | Zephyr SDK 1.0.1 with the ARM toolchain |
| `claude/` | rules and skills for agents working in this repo |

## Use

This repo is a west project of the [robarm-manifest](https://github.com/tiacsys/robarm-manifest)
workspace. Run every command from the workspace root:

```sh
curatrix run --use west-build -- west build -b nucleo_g474re -d build/robarm-sw/app/nucleo_g474re robarm-sw/app
curatrix run --use tests -- zephyr/scripts/twister -T robarm-sw/tests -p native_sim -O build/robarm-sw/twister
curatrix check robarm-sw --stage local        # docs, IDs, firmware build and tests
```

## Licence

Apache-2.0, see `LICENSE`.
