Canary
======

The canary test case belongs to the system configuration ``canary`` (SYS-CFG-0001), a small
trace chain that tests the tools (plan task 5.3).

The test case need is generated from the comment above the ZTEST in ``tests/canary/src/main.c``
(``Test case: SW-TC-0001. Verifies SW-REQ-0001.``) by ``curatrix gen code-needs robarm-sw`` into
``generated/code-needs.json``, and imported here. For a few input values, ``canary_update()``
returns the same value, and the call takes at most 1 ms.

.. needimport:: /generated/code-needs.json
   :filter: type == "sw-tc"
