@interface IIDatePicker : NSDatePicker

@property char usesAutoLayout;

- (id)init;
- (char)acceptsFirstMouse:(id)a0;
- (char)becomeFirstResponder;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (char)performKeyEquivalent:(id)a0;
- (char)resignFirstResponder;
- (void)_datePickerWasSelected;

@end
