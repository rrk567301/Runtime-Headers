@class NSButton, NSString, NSTextField;

@interface CPUI_PromptForUsernameViewController : NSViewController <NSTextFieldDelegate>

@property (retain) NSTextField *usernameField;
@property (retain) NSTextField *privacyLabel;
@property (retain) NSButton *learnMoreButton;
@property (weak) NSButton *nextButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)buttonClicked:(id)a0;
- (void)syncControls;

@end
