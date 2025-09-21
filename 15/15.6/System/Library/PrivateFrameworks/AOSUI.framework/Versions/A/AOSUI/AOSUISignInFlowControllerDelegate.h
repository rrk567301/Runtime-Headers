@class NSString, CDPContext, NSSet, ACAccountStore, NSWindow;

@interface AOSUISignInFlowControllerDelegate : NSObject <AASignInFlowControllerDelegate> {
    ACAccountStore *_accountStore;
}

@property (weak, nonatomic) NSWindow *presentingWindow;
@property (copy, nonatomic) NSString *deviceOSVersion;
@property (retain, nonatomic) CDPContext *cdpContext;
@property (nonatomic) char skipCDPEnablement;
@property (nonatomic) char backgroundDataclassEnablement;
@property (nonatomic) char skipDataclassEnablement;
@property (copy, nonatomic) NSSet *requiredTerms;
@property (nonatomic) char newSignInReauth;
@property (nonatomic) char shouldStashLoginResponse;
@property (nonatomic) unsigned long long findMyActivationAction;
@property (nonatomic, getter=isFastSignInEnabled) char fastSignInEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)signInFlowController:(id)a0 enableFindMyWithAction:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)signInFlowController:(id)a0 presentGenericTermsUIForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signInFlowController:(id)a0 saveAccount:(id)a1 withAllDataclassesEnabledIfPossibleWithCompletion:(id /* block */)a2;
- (void)signInFlowController:(id)a0 showAlertWithTitle:(id)a1 message:(id)a2 completion:(id /* block */)a3;

@end
