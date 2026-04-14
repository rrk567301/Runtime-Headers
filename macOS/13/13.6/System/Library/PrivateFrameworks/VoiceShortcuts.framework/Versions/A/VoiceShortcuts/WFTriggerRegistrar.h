@class WFTriggerNotificationScheduler, WFBiomeListener, VCCoreDuetListener, WFWorkflowRunCoordinator, VCDaemonXPCEventHandler, WFTriggerBootManager, NSObject, VCTriggerEventQueue;
@protocol OS_dispatch_queue, WFDatabaseProvider;

@interface WFTriggerRegistrar : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (readonly, nonatomic) VCTriggerEventQueue *eventQueue;
@property (readonly, nonatomic) WFTriggerBootManager *triggerBootManager;
@property (readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator;
@property (readonly, nonatomic) VCCoreDuetListener *coreDuetListener;
@property (readonly, nonatomic) WFBiomeListener *biomeListener;
@property (readonly, nonatomic) WFTriggerNotificationScheduler *scheduler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)deleteTriggerWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(id /* block */)a0;
- (void)queue_unregisterConfiguredTriggerWithIdentifier:(id)a0 triggerBacking:(long long)a1;
- (void)removeStalePendingNotifications;
- (void)deleteTriggerWithIdentifier:(id)a0 allowedDeletionClasses:(id)a1 completion:(id /* block */)a2;
- (void)deviceDidUnlockForFirstTime;
- (void)fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (id)initWithDatabaseProvider:(id)a0 eventHandler:(id)a1 runCoordinator:(id)a2;
- (void)queue_registerConfiguredTrigger:(id)a0 completion:(id /* block */)a1;
- (void)queue_unregisterConfiguredTrigger:(id)a0;
- (void)registerAllTriggersWithCompletion:(id /* block */)a0;
- (void)registerTriggerWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)timeChangeDidOccur;
- (void)timezoneChangeDidOccur;
- (long long)triggerBackingForConfiguredTrigger:(id)a0;
- (id)unableToLoadDatabaseErrorWithUnderlyingError:(id)a0;
- (void)unregisterAllTriggers;
- (void)unregisterTriggerWithIdentifier:(id)a0 triggerBacking:(long long)a1;

@end
