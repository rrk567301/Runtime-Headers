@class TRIServerContext, TRITaskQueue, NSObject;
@protocol OS_dispatch_queue;

@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) TRIServerContext *context;
@property (retain, nonatomic) TRITaskQueue *taskQueue;

- (void)_scheduleFetchTaskWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)postponeCellularActivity;
- (void)_registerPostUpgradeActivity;
- (void)registerActivities;
- (void)_registerCellularActivityWithDelay:(double)a0;
- (void)_registerPostUpgradeActivityRequireInexpensiveNetworking;
- (void)_setJitterForXPCActivity:(id)a0 withLabel:(id)a1 replacementCriteria:(id)a2;
- (void)_registerRetryFailuresActivity;
- (void)_scheduleMaintenanceTaskWithActivityDescriptor:(id)a0 label:(id)a1;
- (void).cxx_destruct;
- (void)_registerHotfixTargetingActivity;
- (void)_registerPlaceholderTaskQueueActivity;
- (id)initWithDispatchQueue:(id)a0;
- (void)_setDelaySeconds:(long long)a0 forXPCActivity:(id)a1 withLabel:(id)a2 replacementCriteria:(id)a3;
- (void)registerSetupAssistantFetchActivity;
- (void)_registerMaintenanceWorkActivity;
- (void)_registerDeactivationBGST;
- (void)_registerFetchExperimentsActivity;
- (void)_registerClientTriggeredActivities;

@end
