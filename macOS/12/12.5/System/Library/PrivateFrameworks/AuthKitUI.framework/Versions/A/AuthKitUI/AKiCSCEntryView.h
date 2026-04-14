@class NSString, AKPinFieldView, NSTextField;
@protocol AKiCSCEntryViewDelegate;

@interface AKiCSCEntryView : NSView <NSTextFieldDelegate, AKPinFieldViewDelegate>

@property long long icscType;
@property (retain) NSTextField *passwordField;
@property (retain) AKPinFieldView *pinView;
@property (readonly) NSString *enteredCode;
@property BOOL isCodeEditable;
@property id<AKiCSCEntryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)disable;
- (void)enable;
- (void)controlTextDidChange:(id)a0;
- (void)setUpNumericPasscode:(id)a0;
- (void)setUpComplexPasscode:(id)a0;
- (void)returnPressedOnPasswordField:(id)a0;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)pinFieldViewTextDidComplete:(id)a0;
- (id)initWithType:(long long)a0 codeLength:(id)a1 placeHolderString:(id)a2;
- (void)setFocusToCodeEntry;
- (void)codeWasIncorrect;

@end
