@interface IIDatePicker : NSDatePicker

@property BOOL usesAutoLayout;

- (void)mouseDown:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (void)keyDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)_datePickerWasSelected;

@end
