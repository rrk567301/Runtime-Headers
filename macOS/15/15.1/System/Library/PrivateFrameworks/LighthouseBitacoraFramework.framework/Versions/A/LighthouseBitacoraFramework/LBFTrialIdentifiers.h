@class NSString;

@interface LBFTrialIdentifiers : NSObject

@property (readonly, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) NSString *deploymentID;
@property (readonly, nonatomic) NSString *treatmentID;
@property (readonly, nonatomic) NSString *trialTaskID;
@property (readonly, nonatomic) long long identifierType;

- (void).cxx_destruct;
- (id)initWithExperimentID:(id)a0 deploymentID:(int)a1 treatmentID:(id)a2;
- (id)initWithBMLTTaskID:(id)a0 deploymentID:(int)a1;

@end
