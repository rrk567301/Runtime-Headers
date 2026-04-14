@class NSString, NSArray;

@interface PHACurareShadowEvaluationRecipeOptions : PHAPrivateFederatedLearningRecipeOptions

@property (retain, nonatomic) NSString *trialDeploymentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (retain, nonatomic) NSString *trialTreatmentID;
@property (retain, nonatomic) NSArray *modelInfoArray;

- (void).cxx_destruct;
- (id)init;

@end
