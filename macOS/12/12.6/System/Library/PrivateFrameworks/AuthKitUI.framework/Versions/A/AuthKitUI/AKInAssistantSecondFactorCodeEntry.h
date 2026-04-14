@class NSTextField, NSString, NSView, NSProgressIndicator, AKPinFieldView, NSObject, NSLayoutConstraint, NSButton, NSNumber;
@protocol AKSecondFactorCodeEntryDelegate;

@interface AKInAssistantSecondFactorCodeEntry : NSViewController <AKPinFieldViewDelegate>

@property (retain) AKPinFieldView *pinView;
@property (retain) NSString *code;
@property (retain) NSString *message;
@property (retain) NSObject<AKSecondFactorCodeEntryDelegate> *delegate;
@property (copy) id /* block */ pinEnteredBlock;
@property (copy) id /* block */ cancelBlock;
@property (copy) id /* block */ noCodeBlock;
@property (retain) NSView *pinContainerView;
@property (retain) NSTextField *instructionLabel;
@property (retain) NSTextField *errorLabel;
@property (retain) NSButton *didntGetCodeButton;
@property (retain) NSProgressIndicator *progressIndicator;
@property (retain) NSLayoutConstraint *widthOfPinViewConstraint;
@property (readonly) NSNumber *enteredPin;
@property (setter=setCodeEditable:) BOOL isCodeEditable;
@property (retain) NSNumber *codeLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)disable;
- (void)awakeFromNib;
- (id)initWithMessage:(id)a0;
- (void)showError:(id)a0;
- (void)_hideError;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)pinFieldViewTextDidComplete:(id)a0;
- (void)setFocusToPinView;
- (void)_resetPinView;
- (void)_codeEntered;
- (void)noCodeButtonPressed:(id)a0;

@end
