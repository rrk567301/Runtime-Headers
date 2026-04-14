@class NSTextField, MMPinFieldView, NSView, NSProgressIndicator, NSString, NSLayoutConstraint, NSButton, AOSUICodeEntryContext;

@interface AOSUICodeEntryViewController : NSViewController <MMPinFieldViewDelegate>

@property (retain) AOSUICodeEntryContext *context;
@property (retain) MMPinFieldView *pinView;
@property (retain) NSView *pinContainerView;
@property (retain) NSTextField *promptTitle;
@property (retain) NSTextField *promptMessage;
@property (retain) NSTextField *errorLabel;
@property (retain) NSProgressIndicator *progressIndicator;
@property (retain) NSButton *noCodeButton;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *doneButton;
@property (retain) NSLayoutConstraint *widthOfPinViewConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)awakeFromNib;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)cancelButtonPressed:(id)a0;
- (void)showError:(id)a0;
- (void)_hideError;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)pinFieldViewTextDidComplete:(id)a0;
- (void)_resetPinView;
- (void)_codeEntered;
- (void)noCodeButtonPressed:(id)a0;
- (void)doneButtonPressed:(id)a0;
- (void)makePinViewActive;
- (void)_showErrorAlertWithTitle:(id)a0 message:(id)a1;

@end
