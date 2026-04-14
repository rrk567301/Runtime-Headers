@class PFUbiquityBaselineHeuristics, NSObject;
@protocol PFUbiquityBaselineRollOperationDelegate;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
    PFUbiquityBaselineHeuristics *_heuristics;
}

@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)main;
- (id)retainedDelegate;

@end
