#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/elestorm/Desktop/lzy/lzycpp/lzycpp/mac-build
  make -f /Users/elestorm/Desktop/lzy/lzycpp/lzycpp/mac-build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/elestorm/Desktop/lzy/lzycpp/lzycpp/mac-build
  make -f /Users/elestorm/Desktop/lzy/lzycpp/lzycpp/mac-build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/elestorm/Desktop/lzy/lzycpp/lzycpp/mac-build
  make -f /Users/elestorm/Desktop/lzy/lzycpp/lzycpp/mac-build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/elestorm/Desktop/lzy/lzycpp/lzycpp/mac-build
  make -f /Users/elestorm/Desktop/lzy/lzycpp/lzycpp/mac-build/CMakeScripts/ReRunCMake.make
fi

