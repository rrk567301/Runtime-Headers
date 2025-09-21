@class NSString, TRIPersistedTaskAttribution;

@interface TRIActivateTargetedBMLTDeploymentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *backgroundMlTaskId;
@property (nonatomic) char hasBackgroundMlTaskId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) char hasFactorPackSetId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (copy, nonatomic) NSString *bmltBatchNotificationId;
@property (nonatomic) char hasBmltBatchNotificationId;

+ (id)descriptor;

@end
