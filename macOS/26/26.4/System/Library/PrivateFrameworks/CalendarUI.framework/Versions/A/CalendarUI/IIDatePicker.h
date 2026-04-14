@interface IIDatePicker : NSDatePicker

@property BOOL usesAutoLayout;

- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)_datePickerWasSelected;

@end
