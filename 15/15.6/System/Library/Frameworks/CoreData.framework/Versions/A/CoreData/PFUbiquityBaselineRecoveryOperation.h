@class NSObject;
@protocol PFUbiquityBaselineRecoveryOperationDelegate;

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *delegate;

- (char)isEqual:(id)a0;
- (id)retainedDelegate;
- (void)main;

@end
