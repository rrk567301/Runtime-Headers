@class NSString, AABenefactorInfo, AOSUIOBBaseViewController, NSWindow;
@protocol AOSUIAccountContactsSettingsDelegate;

@interface AOSUIInheritanceInvitationHandler : NSObject <AOSUIOBBaseViewControllerDelegate> {
    AOSUIOBBaseViewController *_baseViewController;
    NSWindow *_modalWindow;
    NSWindow *_appWindow;
    AABenefactorInfo *_benefactorInfo;
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
- (id)initWithAppWindow:(id)a0;
- (void)handleInheritanceInvitationForArgs:(id)a0;
- (void)_fetchInfoAndPresentBeneficiaryInvitationForUUID:(id)a0;
- (void)_presentInheritanceInvitationForBenefactor:(id)a0 completion:(id /* block */)a1;
- (void)_setupViewForInvitationWithBenefactor:(id)a0;
- (void)_showTrustedContacts;

@end
