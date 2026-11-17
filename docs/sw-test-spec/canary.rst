Canary
======

The canary test case belongs to the system configuration ``canary`` (SYS-CFG-0001), a small
trace chain that tests the tools (plan task 5.3).

The test case need is written here by hand until the SW-TC extraction from the ZTEST comments
(plan task 5.10) generates it. Its ID is the one in the comment above the ZTEST in
``tests/canary/src/main.c``.

.. sw-tc:: Canary output follows the input
   :id: SW-TC-0001
   :status: valid
   :verifies: SW-REQ-0001
   :configs: SYS-CFG-0001

   ZTEST ``test_output_follows_input`` in suite ``canary``; Twister reports it as
   ``robarm.canary.canary.output_follows_input`` on ``native_sim``. For a few input values,
   ``canary_update()`` returns the same value, and the call takes at most 1 ms.
