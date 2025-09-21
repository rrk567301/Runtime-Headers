@class NSString;

@interface TRIPersistedExperimentFactorsState : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) char hasDeploymentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) char hasTreatmentId;

+ (id)descriptor;

@end
