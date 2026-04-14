@class NSString, NSImageView, NSTextField;
@protocol CreditCardDataEditorCellViewDelegate;

@interface CreditCardDataEditorCellView : NSTableCellView <NSTextFieldDelegate>

@property (weak, nonatomic) id<CreditCardDataEditorCellViewDelegate> delegate;
@property (weak, nonatomic) NSImageView *creditCardIconImageView;
@property (weak, nonatomic) NSTextField *creditCardNameField;
@property (weak, nonatomic) NSTextField *creditCardNumberField;
@property (weak, nonatomic) NSTextField *cardholderNameField;
@property (weak, nonatomic) NSTextField *expirationDateField;
@property (nonatomic) BOOL isVirtualCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textShouldBeginEditing:(id)a1;
- (BOOL)control:(id)a0 textShouldEndEditing:(id)a1;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)setBackgroundStyle:(long long)a0;
- (id)_creditCardFormatter;
- (id)_identifierForTextField:(id)a0;
- (void)textFieldDidChangeText:(id)a0;

@end
