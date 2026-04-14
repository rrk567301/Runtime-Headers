@class SwiftVCDaemonXPCEventHandler, NSMutableDictionary, NSDictionary, WFTriggerEventQueue, WFDatabase, NSObject, NSString;
@protocol OS_dispatch_queue, WFDatabaseProvider;

@interface WFDiskMountingListener : NSObject <WFTriggerListener>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) WFTriggerEventQueue *eventQueue;
@property (retain, nonatomic) NSDictionary *latestDiskInfo;
@property (retain, nonatomic) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) NSMutableDictionary *debouncers;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (retain, nonatomic) WFDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)checkTriggerStateWithKeyPath:(id)a0 completion:(id /* block */)a1;
- (void)checkTriggerStateWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)updateLastFiredDate:(double)a0 forTrigger:(id)a1;
- (void)debouncedFireTriggerWithIdentifier:(id)a0 eventInfo:(id)a1 diskName:(id)a2;
- (void)debouncerDidFireForTrigger:(id)a0;
- (void)diskArbitrationEventSubscribe:(id)a0 specificDiskVolumeUUID:(id)a1 needsAppear:(BOOL)a2 needsDisappear:(BOOL)a3;
- (void)diskArbitrationEventUnsubscribe:(id)a0;
- (void)fireDiskEvent:(id)a0 forTrigger:(id)a1;
- (void)fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (void)handleDiskEvent:(id)a0;
- (id)initWithDatabaseProvider:(id)a0 eventQueue:(id)a1 eventHandler:(id)a2;
- (void)queue_fireDiskTriggerWithIdentifier:(id)a0 eventInfo:(id)a1 completion:(id /* block */)a2;
- (void)queue_registerConfiguredDiskTrigger:(id)a0 completion:(id /* block */)a1;
- (void)queue_unregisterConfiguredDiskTriggerWithIdentifierSync:(id)a0;
- (void)registerConfiguredTrigger:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToDiskArbitrationEventsWithTriggerID:(id)a0 specificDiskVolumeUUID:(id)a1 needsAppear:(BOOL)a2 needsDisappear:(BOOL)a3;
- (void)unregisterConfiguredDiskTriggerWithIdentifier:(id)a0;
- (void)unregisterConfiguredTriggerWithIdentifier:(id)a0;
- (void)unsubscribeFromDiskArbitrationEventsWithTriggerID:(id)a0;
- (void)updateDatabaseWithNewBookmark:(id)a0 forTrigger:(id)a1 volumeUUID:(id)a2;
- (void)updateFileAccessForTriggerID:(id)a0 urlWrapper:(id)a1 completion:(id /* block */)a2;
- (void)updateMountPath:(id)a0 forTrigger:(id)a1 volumeUUID:(id)a2;

@end
