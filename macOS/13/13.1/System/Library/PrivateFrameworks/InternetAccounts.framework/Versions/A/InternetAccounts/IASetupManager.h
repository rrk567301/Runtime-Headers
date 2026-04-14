@class NSTextField, NSView, NSArray, NSString, IANewAccountChooserController, IAAccount, NSWindow, NSButton, IASetupViewController;

@interface IASetupManager : NSWindowController <IANewAccountChooserControllerDelegateProtocol> {
    id /* block */ _completion;
    NSWindow *_mainWindow;
}

@property (retain) NSView *currentSubview;
@property (retain) IASetupManager *me;
@property (weak) NSButton *backButton;
@property (weak) NSButton *nextButton;
@property (weak) NSButton *cancelButton;
@property (weak) NSButton *cancelButtonChooser;
@property (weak) NSButton *continueButton;
@property (weak) NSWindow *chooserWindow;
@property (weak) NSTextField *chooserTitle;
@property (weak) NSTextField *getStartedText;
@property (retain) NSArray *services;
@property (retain) IAAccount *account;
@property (retain) IASetupViewController *viewController;
@property (readonly) IANewAccountChooserController *accountChooser;
@property BOOL showAccountChooser;
@property (retain) NSString *otherRowLabel;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateButtons;
- (void)cancel:(id)a0;
- (void)help:(id)a0;
- (void)back:(id)a0;
- (void)updateView:(id)a0;
- (void)alistPluginDidCreateAccount:(id)a0;
- (void)alistPluginDidCancel:(id)a0;
- (void)accountSetupAddNew:(id)a0;
- (void)showOtherAccountsSheet;
- (id)initWithServices:(id)a0;
- (void)beginSetupInWindow:(id)a0 completion:(id /* block */)a1;
- (void)endSetupManagerWithError:(id)a0;
- (void)installChooserView:(id)a0;
- (void)closeWindow;
- (void)_beginAccountChooser;
- (void)_beginBListAccountSetup;
- (id)_serviceNameForEnvironment;
- (id)_chooserTitleForEnvironment;
- (id)_otherRowLabelForEnvironment;
- (void)next:(id)a0;
- (void)continue:(id)a0;
- (id)_accountWithProvider:(id)a0 fromArray:(id)a1;
- (id)_childAccountsFromFoundAListAccounts:(id)a0;
- (void)updateCancelButtons;

@end
