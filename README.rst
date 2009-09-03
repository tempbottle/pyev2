What
====

pyev2 is Python C extension wrapper around libev.

This module is heavily based (initially copy-pasted) on pyev library by Malek Hadj-Ali.

Differences:

    * pyev2 supports Python2, while pyev is Py3k only

    * no libev patches, no libev source in pyev2 source tree

    * no implicit `ev_default_destroy()` because it led to crashes in some cases.
      Use `ev2.destroy_default()` if you know what you're doing.

    * some integer sign fixes

    * watcher `.active`, `.pending` attributes have 'is' prefix (`.is_active`, `.is_pending`)

    * `__version__` contains only pyev2 version.
      `ev2.libev_version` attribute has libev headers version

    * `abi_version` is module attribute (function in pyev)

    * docutils (rst2html) friendly doc-strings

    * types defined in separate .h file

    * @null@ and @unused@ splint annotations (doesn't help much, actually)


Credits
=======

pyev2 by Sergey Shepelev <temotor@gmail.com>.

Many thanks to Malek Hadj-Ali for his great original work (pyev).


License
=======

pyev2 is under MIT license. Text is included in file LICENSE.
