Firmware: robarm_app (fw-robarm-app)
====================================

This document describes one firmware image: the Zephyr application ``app/`` of robarm-sw, the
deliverable that goes onto the controller board. It is the SW counterpart of a board document
(``pcba-<board>``) or an assembly document (``asm-<assembly>``) (tiacsys/xdmod#69 decision Q8).
Requirements, architecture and tests of the software are in ``sw-req``, ``sw-arch``,
``sw-test-spec`` and ``sw-test-report``.

.. note::

   A skeleton with what robarm-sw has today. Image version, size and memory map are placeholders
   until the firmware has a version file and the build output is part of the document.

Overview
--------

.. list-table::
   :header-rows: 1
   :class: xd-table

   * - Item
     - Value
   * - Application
     - ``app/`` (CMake project ``robarm_app``); sources ``app/src/main.c``
   * - Zephyr board
     - ``nucleo_g474re`` (NUCLEO-G474RE, D16)
   * - Board variant
     - none: robarm-sw has no board of its own and no board variant yet (no Zephyr board roots in
       ``boards/``)
   * - Devicetree overlay
     - ``app/boards/nucleo_g474re.overlay`` (a placeholder: no joints and buses yet)
   * - Build
     - ``west build --pristine auto -b nucleo_g474re -d build/robarm-sw/app/nucleo_g474re robarm-sw/app``
       (check CK-F5a of ``curatrix check robarm-sw``, also in PR CI)
   * - Image version
     - not set yet: the application has no ``VERSION`` file, so the image carries Zephyr's
       default version
   * - Configurations served
     - not linked yet (no ``SYS-CFG`` on the image)

Build configuration
-------------------

The Kconfig fragment of the application:

.. literalinclude:: /app/prj.conf
   :language: kconfig

The devicetree overlay for the board:

.. literalinclude:: /app/boards/nucleo_g474re.overlay
   :language: dts

Size and memory map
-------------------

Not in this document yet. The CK-F5a build prints the memory regions (flash, RAM) at link time and
writes ``zephyr.map`` into ``build/robarm-sw/app/nucleo_g474re/zephyr/``; a later step shows the
used and total size per region and the version of the image here.
