@class NSDictionary;

@interface LBFTrialStatusDetector : NSObject

@property (readonly, nonatomic) NSDictionary *observedTrialStatusHolder;

- (void).cxx_destruct;
- (id)init;
- (id)getTrialStatus:(id)a0 deploymentId:(id)a1;

@end
