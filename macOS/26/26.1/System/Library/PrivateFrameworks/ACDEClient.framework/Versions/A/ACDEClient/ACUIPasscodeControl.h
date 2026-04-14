@class NSArray, NSString, NSLayoutConstraint, ACUINumericOnlyStringFormatter;
@protocol ACUIPasscodeControlDelegate;

@interface ACUIPasscodeControl : NSControl <NSTextFieldDelegate>

@property (retain, nonatomic) NSArray *textFields;
@property (retain, nonatomic) ACUINumericOnlyStringFormatter *passcodeFormatter;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) id targetObject;
@property (nonatomic) SEL targetAction;
@property (readonly, nonatomic) unsigned long long editFieldCount;
@property (nonatomic) id<ACUIPasscodeControlDelegate> delegate;
@property (nonatomic) unsigned long long characterCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)setStringValue:(id)a0;
- (void)setAction:(SEL)a0;
- (void)setEnabled:(BOOL)a0;
- (id)stringValue;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)setTarget:(id)a0;
- (void)dealloc;
- (void)reset;
- (BOOL)acceptsFirstResponder;
- (void)mouseDown:(id)a0;
- (id)init;
- (void)setNextKeyView:(id)a0;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)awakeFromNib;
- (void)setupFields;
- (double)calculateFieldWidth;
- (double)calculateWidth;
- (double)characterPositionForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })characterRectForIndex:(unsigned long long)a0;
- (void)pasteDigits:(id)a0;
- (void)pastePassCode;
- (void)setFocusOnPaste:(unsigned long long)a0;
- (void)setupControl;
- (void)textFieldDidChangeValue:(id)a0;

@end
