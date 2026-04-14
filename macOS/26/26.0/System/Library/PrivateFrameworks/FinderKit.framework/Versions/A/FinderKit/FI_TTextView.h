@interface FI_TTextView : NSTextView {
    BOOL _doesntAcceptFirstResponder;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEditable:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (id)initWithCoder:(id)a0;
- (void)initCommon;
- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;
- (void)awakeCommon;

@end
