@interface IIDatePicker : NSDatePicker

@property BOOL usesAutoLayout;

- (BOOL)resignFirstResponder;
- (id)init;
- (BOOL)becomeFirstResponder;
- (void)mouseDown:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)keyDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)_datePickerWasSelected;

@end
