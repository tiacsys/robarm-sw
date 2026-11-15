## What and why

<!-- What does this PR change, and why? Link the issue it closes: "Closes #123". -->

## Checks

- [ ] `curatrix check robarm-sw --stage local` passes (run from the workspace root, with CAD content where the repo has it)
- [ ] New IDs come from the ledger (`curatrix ids fix robarm-sw`); no placeholders are left
- [ ] Generated files are regenerated and committed (`curatrix gen all robarm-sw`)
- [ ] For a change across repos: the same branch name is used in every repo, and the other PRs are linked here
- [ ] The firmware builds for `nucleo_g474re` and the ztest suites pass on `native_sim` (both are part of the local check)

## Notes for the reviewer

<!-- Anything the reviewer should look at first, open questions, follow-up work. -->
