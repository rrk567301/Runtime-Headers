@class NSTextField, NSString, NSView, NSProgressIndicator, AKPinFieldView, AKNoCodeReceivedController, NSObject, NSLayoutConstraint, NSButton, NSWindow, NSNumber;
@protocol AKSecondFactorCodeEntryDelegate;

@interface AKAppleIDAuthenticationiCloudPrefPaneSecondFactorViewController : NSViewController <AKPinFieldViewDelegate>

@property (retain) AKPinFieldView *pinView;
@property (retain) NSString *code;
@property (retain) NSString *message;
@property (retain) AKNoCodeReceivedController *noCodeRecievedController;
@property (retain) NSObject<AKSecondFactorCodeEntryDelegate> *delegate;
@property (retain) NSView *pinContainerView;
@property (retain) NSTextField *instructionLabel;
@property (retain) NSTextField *errorLabel;
@property (retain) NSProgressIndicator *progressIndicator;
@property (retain) NSButton *noCodeButton;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *doneButton;
@property (retain) NSLayoutConstraint *widthOfPinViewConstraint;
@property (copy) id /* block */ noCodeButtonAction;
@property (copy) id /* block */ cancelButtonAction;
@property (copy) id /* block */ doneButtonAction;
@property (weak) NSWindow *hostWindow;
@property BOOL makeSheetCritical;
@property (readonly) NSNumber *defaultCode;
@property (readonly) NSNumber *enteredPin;
@property (setter=setCodeEditable:) BOOL isCodeEditable;
@property (retain) NSNumber *codeLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)cancelButtonPressed:(id)a0;
- (id)initWithMessage:(id)a0;
- (void)showError:(id)a0;
- (void)_hideError;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)pinFieldViewTextDidComplete:(id)a0;
- (void)_resetPinView;
- (void)_codeEntered;
- (void)noCodeButtonPressed:(id)a0;
- (void)doneButtonPressed:(id)a0;
- (void)makePinViewActive;
- (void)setDefaultCode:(id)a0;

@end
