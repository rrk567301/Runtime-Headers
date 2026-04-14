@class NSString, NSWindow, AIDAAccountManager;

@interface AOSUISignOutFlowControllerDelegate : NSObject <AOSUIRecoveryFactorControllerDelegate, AASignOutFlowControllerDelegate> {
    id /* block */ _pendingSignOutCompletion;
}

@property (weak, nonatomic) NSWindow *presentingWindow;
@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)signOutFlowController:(id)a0 showAlertWithTitle:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)signOutFlowController:(id)a0 disableFindMyDeviceForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signOutFlowController:(id)a0 signOutAccount:(id)a1 completion:(id /* block */)a2;
- (id)initWithAccountManager:(id)a0 presentingWindow:(id)a1;
- (void)recoveryFactorController:(id)a0 didFinishAddingRecoveryContactWithError:(id)a1;
- (id)initWithPresentingWindow:(id)a0;

@end
