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
result needs (CK-F5c) before it builds this document. They are previews: they show this build's
run and are never evidence. Published results come from the ``evidence`` branch of
robarm-integration.

.. xd-needimport:: /evidence-preview/tr-needs.json
   :missing: No local test run: this build ran without Twister, so it shows no test results.
