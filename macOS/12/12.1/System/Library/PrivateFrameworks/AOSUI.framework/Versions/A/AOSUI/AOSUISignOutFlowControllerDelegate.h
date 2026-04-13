@class NSString, NSWindow, ACAccountStore;

@interface AOSUISignOutFlowControllerDelegate : NSObject <AASignOutFlowControllerDelegate> {
    id /* block */ _pendingSignOutCompletion;
    ACAccountStore *_accountStore;
}

@property (weak, nonatomic) NSWindow *presentingWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)signOutFlowController:(id)a0 showAlertWithTitle:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)signOutFlowController:(id)a0 disableFindMyDeviceForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signOutFlowController:(id)a0 signOutAccount:(id)a1 completion:(id /* block */)a2;
- (id)initWithPresentingWindow:(id)a0;

@end
