@class NSString, TRIPBTimestamp, TRINotificationProcessingPolicy;

@interface TRIRolloutDeploymentPushNotification : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (retain, nonatomic) TRIPBTimestamp *deploymentDate;
@property (nonatomic) char hasDeploymentDate;
@property (retain, nonatomic) TRINotificationProcessingPolicy *notificationProcessingPolicy;
@property (nonatomic) char hasNotificationProcessingPolicy;

+ (id)descriptor;

@end
