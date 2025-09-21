@interface WFFilesystemListener : NSObject <WFTriggerListener> {
    void /* unknown type, empty encoding */ xpcEventHandler;
    void /* unknown type, empty encoding */ triggerEventQueue;
    void /* unknown type, empty encoding */ listenerWorkQueue;
    void /* unknown type, empty encoding */ trackedNodeIDToDebouncers;
    void /* unknown type, empty encoding */ filesystemStateManager;
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ notificationManager;
}

@property (class, nonatomic) double debounceWindow;

- (id)init;
- (void)checkTriggerStateWithKeyPath:(id)a0 completion:(id /* block */)a1;
- (void)checkTriggerStateWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)debouncerFired:(id)a0;
- (void)fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (void)handleEventNotification:(id)a0;
- (id)initWithEventHandler:(id)a0 eventQueue:(id)a1 databaseProvider:(id)a2 notificationManager:(id)a3;
- (void)registerConfiguredTrigger:(id)a0 completion:(id /* block */)a1;
- (void)unregisterConfiguredTriggerWithIdentifier:(id)a0;
- (void)updateFileAccessForTriggerID:(id)a0 urlWrapper:(id)a1 completion:(id /* block */)a2;

@end
