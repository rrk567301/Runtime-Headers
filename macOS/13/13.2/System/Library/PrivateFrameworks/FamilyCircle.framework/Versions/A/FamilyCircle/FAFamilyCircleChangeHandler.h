@interface FAFamilyCircleChangeHandler : NSObject

+ (void)handleURLResponse:(id)a0;
+ (void)handleDidRepairFamilyWithCompletion:(id /* block */)a0;
+ (void)handleDidSetupFamilyWithCompletion:(id /* block */)a0;
+ (void)handleDidCloseInviteFlowWithCompletion:(id /* block */)a0;
+ (void)handleInitialExtensionLoadWithCompletion:(id /* block */)a0;
+ (void)_refetchFamilyWithContext:(id)a0 completion:(id /* block */)a1;

@end
