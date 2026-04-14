@class NSString, AOSUIAccountContactPromptController, AOSUIAccountContactsSharingController, AOSUIOBBaseViewController, NSWindow;

@interface AOSUIMyPendingBeneficiaryActionHandler : AOSUIMyBeneficiaryActionHandler <AOSUIOBBaseViewControllerDelegate, AOSUIBeneficiaryRadioListViewSelectorDelegate> {
    unsigned long long _currentRadioListSelection;
    AOSUIOBBaseViewController *baseViewController;
    NSWindow *_modalWindow;
    unsigned long long currentSetupStep;
    AOSUIAccountContactPromptController *_viewController;
    AOSUIAccountContactsSharingController *_sharingController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)printOperationDidRun:(id)a0 success:(BOOL)a1 contextInfo:(void *)a2;
- (void)doPrimaryAction:(id)a0;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)firstButtonPressed;
- (void)secondButtonPressed;
- (void)currentSelection:(unsigned long long)a0;
- (void)_showChoseHowToShare:(id)a0;
- (void)_printAccessKeyDocument;
- (void)_showInheritanceSetupCompletedForAccessKeyShareType:(unsigned long long)a0;
- (void)_showInheritanceMessageTemplate;
- (void)_showInheritanceEditMessageUI;
- (void)_sendDefaultiMessage;
- (void)_sendInheritanceInvitation;
- (void)_checkMessageEligibility;
- (void)_showIncompatibleDeviceAlert;
- (void)_dismissWithReturnCode:(long long)a0;

@end
