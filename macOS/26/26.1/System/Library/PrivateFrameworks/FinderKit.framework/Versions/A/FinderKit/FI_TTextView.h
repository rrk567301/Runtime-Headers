@interface FI_TTextView : NSTextView {
    BOOL _doesntAcceptFirstResponder;
}

- (void)initCommon;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)setEditable:(BOOL)a0;
- (void)awakeFromNib;
- (void)awakeCommon;

@end
