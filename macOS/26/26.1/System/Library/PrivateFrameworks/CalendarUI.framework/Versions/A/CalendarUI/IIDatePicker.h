@interface IIDatePicker : NSDatePicker

@property BOOL usesAutoLayout;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)mouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)_datePickerWasSelected;

@end
