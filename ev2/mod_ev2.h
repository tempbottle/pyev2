#ifndef mod_ev2_h
#define mod_ev2_h

#ifdef __cplusplus
extern "C" {
#endif

#include <Python.h>
#include <ev.h>
#include <stdbool.h>


#define PYEV2_VERSION_MAJOR 0
#define PYEV2_VERSION_MINOR 1
#define PYEV2_VERSION       "0.1"

// Loop
typedef struct {
    PyObject_HEAD
    struct ev_loop *loop;
} Loop;

// _Watcher - not exposed
typedef struct {
    PyObject_HEAD
    ev_watcher *watcher;
    Loop *loop;
    PyObject *callback;
    /*@null@*/ PyObject *data;
} _Watcher;

// Io
typedef struct {
    _Watcher _watcher;
    ev_io io;
} Io;

// Timer
typedef struct {
    _Watcher _watcher;
    ev_timer timer;
} Timer;

// Periodic
typedef struct {
    _Watcher _watcher;
    ev_periodic periodic;
    PyObject *reschedule_cb;
} Periodic;

// Signal
typedef struct {
    _Watcher _watcher;
    ev_signal signal;
} Signal;

// Child
typedef struct {
    _Watcher _watcher;
    ev_child child;
} Child;

// Statdata
typedef struct {
    PyObject_HEAD
    ev_statdata statdata;
} Statdata;

// Stat
typedef struct {
    _Watcher _watcher;
    ev_stat stat;
    Statdata *attr;
    Statdata *prev;
} Stat;

// Idle
typedef struct {
    _Watcher _watcher;
    ev_idle idle;
} Idle;

// Prepare
typedef struct {
    _Watcher _watcher;
    ev_prepare prepare;
} Prepare;

// Check
typedef struct {
    _Watcher _watcher;
    ev_check check;
} Check;

// Embed
typedef struct {
    _Watcher _watcher;
    ev_embed embed;
    Loop *other;
} Embed;

// Fork
typedef struct {
    _Watcher _watcher;
    ev_fork fork;
} Fork;

// Async
typedef struct {
    _Watcher _watcher;
    ev_async async;
} Async;


#ifdef __cplusplus
}
#endif
#endif // mod_ev2_h
