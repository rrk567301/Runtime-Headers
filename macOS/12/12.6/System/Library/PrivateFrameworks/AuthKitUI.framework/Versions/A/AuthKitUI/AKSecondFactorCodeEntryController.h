@class AKPinFieldView, NSObject, NSButton, NSTouchBar, NSProgressIndicator, NSLayoutConstraint, NSString, NSImage, AKTouchBarController, NSImageCell, AKNoCodeReceivedController, NSNumber, NSView, NSTextField;
@protocol AKSecondFactorCodeEntryDelegate;

@interface AKSecondFactorCodeEntryController : NSViewController <NSTouchBarProvider, AKPinFieldViewDelegate>

@property (retain) AKTouchBarController *touchBarController;
@property (retain) AKPinFieldView *pinView;
@property (retain) NSString *code;
@property (retain) NSNumber *pinCodeLength;
@property (retain) AKNoCodeReceivedController *noCodeRecievedController;
@property (readonly) NSView *mainView;
@property (retain) NSObject<AKSecondFactorCodeEntryDelegate> *delegate;
@property (retain) NSView *pinContainerView;
@property (retain) NSTextField *instructionLabel;
@property (retain) NSTextField *errorLabel;
@property (retain) NSImageCell *imageView;
@property (retain) NSProgressIndicator *progressIndicator;
@property (retain) NSButton *noCodeButton;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *doneButton;
@property (retain) NSLayoutConstraint *widthOfPinViewConstraint;
@property (retain) NSLayoutConstraint *dontShowErrorConstraint;
@property (retain) NSLayoutConstraint *showErrorConstraint;
@property (copy) id /* block */ noCodeButtonAction;
@property (copy) id /* block */ cancelButtonAction;
@property (copy) id /* block */ doneButtonAction;
@property (retain, nonatomic, setter=setDisplayImage:) NSImage *displayImage;
@property (readonly) NSNumber *enteredPin;
@property (setter=setCodeEditable:) BOOL isCodeEditable;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setMessage:(id)a0;
- (void)awakeFromNib;
- (void)cancelButtonPressed:(id)a0;
- (void)setCodeLength:(id)a0;
- (void)showError:(id)a0;
- (void)_hideError;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)pinFieldViewTextDidComplete:(id)a0;
- (void)setFocusToPinView;
- (void)_resetPinView;
- (void)_codeEntered;
- (void)noCodeButtonPressed:(id)a0;
- (void)doneButtonPressed:(id)a0;

@end
