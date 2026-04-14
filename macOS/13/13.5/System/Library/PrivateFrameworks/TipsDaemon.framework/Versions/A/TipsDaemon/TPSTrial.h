@class TRIClient;
@protocol TPSTrialUpdateHandler;

@interface TPSTrial : NSObject

@property (retain, nonatomic) TRIClient *trialClient;
@property (weak, nonatomic) id<TPSTrialUpdateHandler> updateHandler;

- (void).cxx_destruct;
- (id)levelForFactor:(id)a0;
- (id)initWithUpdateHandler:(id)a0;
- (id)trialDeploymentID;
- (id)trialExperimentID;
- (id)trialTreatmentID;
- (id)trialRampID;

@end
