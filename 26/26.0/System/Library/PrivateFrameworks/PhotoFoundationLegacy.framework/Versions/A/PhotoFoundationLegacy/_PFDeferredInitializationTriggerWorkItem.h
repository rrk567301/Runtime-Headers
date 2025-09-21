@interface _PFDeferredInitializationTriggerWorkItem : _PFTriggeredWorkItem {
    struct __CFRunLoopObserver { } *_runLoopWakeObserver;
    struct __CFRunLoopObserver { } *_runLoopSleepObserver;
    unsigned long long _wakeTime;
    unsigned long long _sleepTime;
    unsigned long long _startTime;
    unsigned long long _wakePercent;
    unsigned long long _targetPercent;
    id /* block */ _timerFired;
}

- (void)startTimer;
- (id)init;
- (void)endMonitoring;
- (void).cxx_destruct;
- (void)beginMonitoring;
- (void)timerFired;
- (void)runLoopSleep;
- (void)runLoopWake;
- (BOOL)runsWorkItemsConcurrently;

@end
