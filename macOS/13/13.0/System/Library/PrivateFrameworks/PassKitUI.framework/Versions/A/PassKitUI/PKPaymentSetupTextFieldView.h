@class NSString, NSTextField;

@interface PKPaymentSetupTextFieldView : PKPaymentSetupFieldView <NSTextFieldDelegate>

@property (retain) NSTextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)label;
- (double)firstBaselineOffsetFromTop;
- (void)controlTextDidChange:(id)a0;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (id)textView:(id)a0 willDisplayToolTip:(id)a1 forCharacterAtIndex:(unsigned long long)a2;
- (id)initWithSetupField:(id)a0;

@end
