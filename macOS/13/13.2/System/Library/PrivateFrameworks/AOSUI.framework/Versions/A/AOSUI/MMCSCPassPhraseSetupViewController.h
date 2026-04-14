@class NSImageView, NSString, NSTextField, NSButton, NSTouchBar, iCloudTouchBarController, NSSecureTextField;
@protocol MMCSCPassPhraseSetupViewControllerDelegate;

@interface MMCSCPassPhraseSetupViewController : NSViewController <NSTouchBarProvider> {
    long long _currentState;
}

@property (copy) NSString *initialPassPhrase;
@property (copy) NSString *confirmedPassPhrase;
@property (retain) iCloudTouchBarController *touchBarController;
@property id<MMCSCPassPhraseSetupViewControllerDelegate> delegate;
@property BOOL showChangeView;
@property BOOL showRandomView;
@property (weak) NSImageView *passPhraseImageView;
@property (weak) NSTextField *passPhraseTitle;
@property (weak) NSTextField *passPhraseMessage;
@property (weak) NSSecureTextField *passPhraseSecurityCodeTextField;
@property (weak) NSTextField *passPhraseRandomCodeTextField;
@property (weak) NSTextField *passPhraseRandomCodeLabel;
@property (weak) NSTextField *passPhraseEntryLabel;
@property (weak) NSButton *passPhraseHelpButton;
@property (weak) NSButton *passPhraseCancelButton;
@property (weak) NSButton *passPhraseAlternateButton;
@property (weak) NSButton *passPhraseConfirmButton;
@property (readonly) NSString *passPhrase;
@property (readonly) BOOL isSecurePassphrase;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)setup:(BOOL)a0;
- (void)cancelButtonClicked:(id)a0;
- (BOOL)isSecurePassphrase;
- (void)_showErrorMessage:(id)a0;
- (BOOL)_isSimplePassphrase;
- (void)defaultButtonClicked:(id)a0;
- (void)alternateButtonClicked:(id)a0;
- (BOOL)_isPasswordWeak:(id)a0 isSimple:(BOOL)a1;
- (id)_randomPasscode;
- (void)_clearSecurityCodeEntry;
- (id)_securityCodeFromSecureEntryView;
- (void)_showSecurityCodeEntryLabel;
- (void)_showSecurityCodeConfirmLabel;
- (void)_showSecurityEntryErrorLabel;
- (void)_showNormalMessage:(id)a0;

@end
