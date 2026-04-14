@class NSSet, AASignInFlowController, CDPContext, ACAccount, NSError;

@interface AppleIDSetupDaemon.CloudSignInContext : NSObject <AASignInFlowControllerDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* function */ requiredTerms;
}

@property (nonatomic, retain) CDPContext *cdpContext;
@property (nonatomic) BOOL skipCDPEnablement;
@property (nonatomic) BOOL backgroundDataclassEnablement;
@property (nonatomic) BOOL skipDataclassEnablement;
@property (nonatomic, copy) NSSet *requiredTerms;
@property (nonatomic) BOOL shouldStashLoginResponse;
@property (nonatomic) unsigned long long findMyActivationAction;

- (id)init;
- (void).cxx_destruct;
- (void)signInFlowController:(AASignInFlowController *)a0 enableFindMyWithAction:(unsigned long long)a1 completion:(void (^)(BOOL))a2;
- (void)signInFlowController:(AASignInFlowController *)a0 presentGenericTermsUIForAccount:(ACAccount *)a1 completion:(void (^)(BOOL, ACAccount *, NSError *))a2;
- (void)signInFlowController:(AASignInFlowController *)a0 presentProgressViewForAccount:(ACAccount *)a1 completion:(void (^)(BOOL))a2;

@end
