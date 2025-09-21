@protocol TRIHotfixRolloutTargetingSchedulerProtocol, TRIExperimentUpdateSchedulerProtocol, TRIUrgentRollbackSchedulerProtocol, TRINotificationReactionCheckerProtocol;

@interface TRIPushNotificationHandler : NSObject <TRIPushServiceConnectionDelegate>

@property (readonly, nonatomic) id<TRINotificationReactionCheckerProtocol> notificationChecker;
@property (readonly, nonatomic) id<TRIHotfixRolloutTargetingSchedulerProtocol> hotfixScheduler;
@property (readonly, nonatomic) id<TRIUrgentRollbackSchedulerProtocol> rollbackScheduler;
@property (readonly, nonatomic) id<TRIExperimentUpdateSchedulerProtocol> experimentUpdateScheduler;

- (void).cxx_destruct;
- (void)_handleDeploymentNotification:(id)a0;
- (void)_handleExperimentUpdateNotification:(id)a0;
- (void)_handleRollbackNotification:(id)a0;
- (char)_isMissingNotificationFields:(id)a0;
- (void)didReceivePushNotification:(id)a0;
- (id)initWithNotificationChecker:(id)a0 hotfixScheduler:(id)a1 rollbackScheduler:(id)a2 experimentUpdateScheduler:(id)a3;

@end
