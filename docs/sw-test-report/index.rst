SW Test Report
==============

This document shows the results of the software tests.

.. note::

   This is a skeleton. The content comes in Phase 6.

What will go here
-----------------

* the results of the Twister runs (``native_sim``), read from their JUnit files;
* for each test case of the SW Test Specification, its latest result;
* the coverage of the SW requirements by passed tests.

Results of the local test run
-----------------------------

``curatrix check robarm-sw`` runs the Twister tests (CK-F5b) and turns their results into test
result needs (CK-F5c) before it builds this document. They are previews and never evidence. They
are shown only with the date and commit of their run, and only while the repo is still at that
commit. Published results come from the ``evidence`` branch of robarm-integration.

.. xd-needimport:: /checks/preview/tr-needs.json
   :stamp:
   :missing: No local test run of this commit: this build shows no test results.
