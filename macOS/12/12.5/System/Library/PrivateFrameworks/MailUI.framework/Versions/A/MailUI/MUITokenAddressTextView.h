@class MUIAddressField;

@interface MUITokenAddressTextView : NSTokenTextView

@property (weak, nonatomic) MUIAddressField *addressField;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (id)designatedFocusRingView;
- (BOOL)performDragOperation:(id)a0;
- (void)noteFocusRingMaskChanged;
- (void)mouseUp:(id)a0;
- (void)_muiTokenAddressTextViewCommonInit;

@end
