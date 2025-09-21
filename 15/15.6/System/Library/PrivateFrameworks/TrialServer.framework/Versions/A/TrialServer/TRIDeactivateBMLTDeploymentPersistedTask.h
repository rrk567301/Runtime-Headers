@class NSString;

@interface TRIDeactivateBMLTDeploymentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *backgroundMlTaskId;
@property (nonatomic) char hasBackgroundMlTaskId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (nonatomic) int triggerEvent;
@property (nonatomic) char hasTriggerEvent;
@property (copy, nonatomic) NSString *bmltBatchNotificationId;
@property (nonatomic) char hasBmltBatchNotificationId;

+ (id)descriptor;

@end
