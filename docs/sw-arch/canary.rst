Canary
======

The canary module belongs to the system configuration ``canary`` (SYS-CFG-0001), a small trace
chain that tests the tools (plan task 5.3). It is not part of the robot arm firmware.

.. sw-arch:: Canary module
   :id: SW-ARCH-0001
   :status: valid
   :realizes: SYS-EL-0001
   :satisfies: SW-REQ-0001
   :configs: SYS-CFG-0001

   The software part of the canary unit: one function in ``app/src/canary.c``. It is not linked
   into the robot arm firmware; only the test ``tests/canary`` builds it.

.. sw-dd:: canary_update()
   :id: SW-DD-0001
   :status: valid
   :refines: SW-ARCH-0001
   :satisfies: SW-REQ-0001
   :configs: SYS-CFG-0001

   ``int32_t canary_update(int32_t input)`` returns the new output for an input value. The output
   equals the input, computed at once, with no waiting and no state.

The code unit that implements the design element is generated from the ``@xdid`` Doxygen block in
``app/src/canary.h`` (``curatrix gen code-needs robarm-sw``) and imported here:

.. needimport:: /generated/code-needs.json
   :filter: type == "sw-impl"
