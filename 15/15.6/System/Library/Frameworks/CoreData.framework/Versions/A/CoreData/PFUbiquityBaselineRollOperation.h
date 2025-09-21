@class PFUbiquityBaselineHeuristics, NSObject;
@protocol PFUbiquityBaselineRollOperationDelegate;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
    PFUbiquityBaselineHeuristics *_heuristics;
}

@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;

- (void)dealloc;
- (id)init;
- (char)isEqual:(id)a0;
- (id)retainedDelegate;
- (void)main;

@end
