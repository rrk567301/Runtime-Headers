@interface WFFilesystemListener : NSObject <WFTriggerListener> {
    void /* unknown type, empty encoding */ triggerEventQueue;
    void /* unknown type, empty encoding */ listenerWorkQueue;
    void /* unknown type, empty encoding */ trackedTasks;
    void /* unknown type, empty encoding */ trackedNodeIDToDebouncers;
    void /* unknown type, empty encoding */ filesystemStateManager;
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ notificationManager;
}

@property (class, nonatomic) double debounceWindow;

- (void).cxx_destruct;
- (void)checkTriggerStateWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)handleEvent:(id)a0;
- (void)checkTriggerStateWithKeyPath:(id)a0 completion:(id /* block */)a1;
- (void)debouncerFired:(id)a0;
- (void)fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (id)initWithEventQueue:(id)a0 database:(id)a1 notificationManager:(id)a2;
- (void)queueFireTriggerWith:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (void)queueUnregisterConfiguredTriggerWith:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerConfiguredTrigger:(id)a0 completion:(id /* block */)a1;
- (void)unregisterConfiguredTriggerWithIdentifier:(id)a0;
- (void)updateFileAccessForTriggerID:(id)a0 urlWrapper:(id)a1 completion:(id /* block */)a2;

@end
