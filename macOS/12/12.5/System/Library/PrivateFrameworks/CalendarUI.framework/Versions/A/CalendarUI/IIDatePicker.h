@interface IIDatePicker : NSDatePicker

@property BOOL usesAutoLayout;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)_datePickerWasSelected;

@end
