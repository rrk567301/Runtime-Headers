@class NSViewController;

@interface AMSUIAuthKitUpdateTask : AMSAuthKitUpdateTask

@property (readonly) NSViewController *presentingViewController;

- (void).cxx_destruct;
- (unsigned long long)_authenticationType;
- (id)_createAuthKitContext;
- (void)_configureAuthKitContext:(id)a0;
- (id)_createAuthKitController;
- (id)initWithAccount:(id)a0 presentingViewController:(id)a1 options:(id)a2;

@end
