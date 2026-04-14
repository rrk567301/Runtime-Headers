@class TRIServerContext, TRITaskQueue, NSObject;
@protocol OS_dispatch_queue;

@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) TRIServerContext *context;
@property (retain, nonatomic) TRITaskQueue *taskQueue;

- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (void)_registerRetryFailuresActivity;
- (void)_registerFetchExperimentsActivity;
- (void)_registerCellularActivityWithDelay:(double)a0;
- (void)_registerPostUpgradeActivity;
- (void)registerSetupAssistantFetchActivity;
- (void)_registerPostUpgradeActivityRequireInexpensiveNetworking;
- (void)_registerPlaceholderTaskQueueActivity;
- (void)_registerClientTriggeredActivities;
- (void)_registerHotfixTargetingActivity;
- (void)registerRecurrentRollbackActivityWithDelay:(double)a0;
- (void)_setJitterForXPCActivity:(id)a0 withLabel:(id)a1 replacementCriteria:(id)a2;
- (void)_setDelaySeconds:(long long)a0 forXPCActivity:(id)a1 withLabel:(id)a2 replacementCriteria:(id)a3;
- (void)_scheduleMaintenanceAndFetchTasksWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)registerActivities;
- (void)postponeCellularActivity;

@end
