Canary
======

The canary is a small, permanent trace chain through all robarm repos that tests the tools
(plan task 5.3). It belongs to the system configuration ``canary`` (SYS-CFG-0001) and is not part
of the robot arm firmware.

.. sw-req:: Canary output update time
   :id: SW-REQ-0001
   :status: valid
   :refines: SYS-REQ-0001
   :category: performance
   :ears: event
   :quantity: latency
   :unit: ms
   :max: 1
   :verification_method: test
   :verification_scope: logical
   :configs: SYS-CFG-0001

   When the canary input changes, the canary software shall return the new output value within 1 ms.
