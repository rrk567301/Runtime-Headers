@class NSString, TRIPersistedTaskAttribution;

@interface TRIFetchBMLTNotificationsPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (nonatomic) char hasRetryCount;
@property (copy, nonatomic) NSString *backgroundMlTaskId;
@property (nonatomic) char hasBackgroundMlTaskId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (copy, nonatomic) NSString *bmltBatchNotificationId;
@property (nonatomic) char hasBmltBatchNotificationId;

+ (id)descriptor;

@end
