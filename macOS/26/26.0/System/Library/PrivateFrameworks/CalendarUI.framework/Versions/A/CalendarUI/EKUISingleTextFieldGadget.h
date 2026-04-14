@class NSColor, EKUIResizingTextField, NSString;

@interface EKUISingleTextFieldGadget : EKUIIsolateableSingleViewGadget <CalUIResizingTextFieldDelegate>

@property (retain) NSColor *previousFontColor;
@property (retain) EKUIResizingTextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)setObject:(id)a0;
- (id)initWithViewController:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)a0;
- (id)control;
- (id)placeholderText;
- (void)addSubviewsIfNeeded;
- (id)initWithNoTextFieldWithViewController:(id)a0;
- (void)setActiveKeyboardHover:(BOOL)a0;
- (void)updateEvent;
- (void)updateWithChanges:(id)a0;

@end
