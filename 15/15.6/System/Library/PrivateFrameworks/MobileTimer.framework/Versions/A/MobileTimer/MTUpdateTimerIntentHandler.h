@interface MTUpdateTimerIntentHandler : MTTimerIntentHandler

- (id)_timerFromIntentTargetTimer:(id)a0 defaultState:(long long)a1;
- (void)_updateTimer:(id)a0 dryRun:(char)a1 allowMultiple:(char)a2 excludeStoppedTimers:(char)a3 filterBlock:(id /* block */)a4 updateBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (void)_updateTimer:(id)a0 dryRun:(char)a1 updateBlock:(id /* block */)a2 completion:(id /* block */)a3;

@end
