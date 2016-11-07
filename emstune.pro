TEMPLATE  = subdirs
CONFIG   += ordered
SUBDIRS  += plugins \
            #test \ Test is disabled for now, cross compiling with it does not work
            core

test.depends   += plugins

#Ensure the pro file gets touched at the end of the build, so the next build reruns qmake
#gittouch.commands = touch emstudio.pro core/core.pro plugins/freeems/freeems.pro
QMAKE_EXTRA_TARGETS += gittouch
POST_TARGETDEPS += gittouch
