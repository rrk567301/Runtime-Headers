@interface FI_TTextView : NSTextView {
    BOOL _doesntAcceptFirstResponder;
}

- (void)initCommon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)setEditable:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (void)awakeCommon;

@end
