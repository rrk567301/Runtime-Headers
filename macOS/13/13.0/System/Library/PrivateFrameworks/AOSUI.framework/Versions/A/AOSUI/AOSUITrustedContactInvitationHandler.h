@class NSString, AACustodianshipInfo, AOSUIOBBaseViewController, NSWindow;
@protocol AOSUIAccountContactsSettingsDelegate;

@interface AOSUITrustedContactInvitationHandler : NSObject <AOSUIOBBaseViewControllerDelegate> {
    AOSUIOBBaseViewController *baseViewController;
    NSWindow *modalWindow;
    NSWindow *_appWindow;
    AACustodianshipInfo *_custodianshipInfo;
}

@property (weak, nonatomic) id<AOSUIAccountContactsSettingsDelegate> settings_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_verifyCDPWithCompletion:(id /* block */)a0;
- (void)firstButtonPressed;
- (void)secondButtonPressed;
- (id)initWithAppWindow:(id)a0;
- (void)_showTrustedContacts;
- (void)handleTrustedContactInvitationForArgs:(id)a0;
- (void)_fetchInfoAndPresentCustodianInvitationForUUID:(id)a0;
- (void)_presentCustodianInvitationWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)_setupCustodianInvitationView:(id)a0;
- (void)_showCustodianInvitationAcceptedView;
- (void)_acceptCustodianInviteWithID:(id)a0 completion:(id /* block */)a1;
- (void)_declineCustodianInviteWithID:(id)a0 completion:(id /* block */)a1;
- (void)_removeFollowUpWithCompletion:(id /* block */)a0;
- (void)_setfirstButtonToDismissForContainerView:(id)a0;

@end
