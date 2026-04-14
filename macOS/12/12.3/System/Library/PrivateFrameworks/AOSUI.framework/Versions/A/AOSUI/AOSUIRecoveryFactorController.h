@class CDPStateUIController, NSString, CDPStateController, AOSUIAccountContactSetupFlowController, AIDAAccountManager, AAContactsProvider, NSWindow;
@protocol AOSUIRecoveryFactorControllerDelegate;

@interface AOSUIRecoveryFactorController : NSObject <AOSUIAccountContactSetupFlowControllerDelegate> {
    AAContactsProvider *_contactsProvider;
    CDPStateController *_stateController;
    CDPStateUIController *_stateUIController;
    AOSUIAccountContactSetupFlowController *_custodianFlowController;
}

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (weak, nonatomic) id<AOSUIRecoveryFactorControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_account;
- (id)_stateController;
- (void)accountContactSetupFlowControllerDidFinish:(id)a0;
- (id)_contactsProvider;
- (void)_custodianFlowControllerWithCompletion:(id /* block */)a0;
- (id)_stateUIController;
- (id)initWithAccountManager:(id)a0 hostWindow:(id)a1;
- (void)availableRecoveryFactorsWithCompletion:(id /* block */)a0;
- (void)startAddingRecoveryContact;
- (void)generateRecoveryKeyWithCompletion:(id /* block */)a0;

@end
