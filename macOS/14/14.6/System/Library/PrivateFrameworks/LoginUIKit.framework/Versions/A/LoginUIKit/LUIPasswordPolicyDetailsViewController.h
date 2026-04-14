@class NSTextField, NSArray, NSMutableSet, NSLayoutConstraint;

@interface LUIPasswordPolicyDetailsViewController : LUIPopoverViewController {
    NSArray *_policyDetails;
    NSMutableSet *_policyViewControllers;
    NSLayoutConstraint *_bottomConstraint;
}

@property NSTextField *passwordMustTextField;

+ (id)policyDetailsFromError:(id)a0;
+ (id)policyDetailsFromPolicyDictionary:(id)a0;

- (void)dealloc;
- (BOOL)isTransient;
- (void)_updatePolicyUI;
- (id)_policyViewControllerForPolicy:(id)a0;
- (void)setPolicyDetails:(id)a0;

@end
