@class NSString, TRIPersistedTaskAttribution, TRIPersistedTaskCapabilityModifier;

@interface TRIActivateTargetedRolloutDeploymentPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) char hasRolloutId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) char hasFactorPackSetId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) char hasTaskAttribution;
@property (retain, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) char hasCapabilityModifier;

+ (id)descriptor;

@end
