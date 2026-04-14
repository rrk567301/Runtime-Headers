@class NSString, NSWindow, AALocalContactInfo;

@interface AOSUICustodianshipActionHandler : NSObject <AOSUIAccountContactPromptActionHandler>

@property (weak) NSWindow *helpNowWindow;
@property (readonly) AALocalContactInfo *contactInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismissHelpNowPressed;
- (void)doDestructiveAction:(id)a0;
- (void)doPrimaryAction:(id)a0;
- (id)initWithLocalContact:(id)a0;
- (void)_showHelpNowViewWithRecoveryCode:(id)a0 viewController:(id)a1;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)_showHelpNowUnavailableAlertWithMessage:(id)a0 inWindow:(id)a1;

@end
