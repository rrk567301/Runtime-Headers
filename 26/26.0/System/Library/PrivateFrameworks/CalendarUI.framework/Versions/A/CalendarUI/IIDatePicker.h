@interface IIDatePicker : NSDatePicker

@property BOOL usesAutoLayout;

- (void)mouseDown:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)_datePickerWasSelected;

@end
