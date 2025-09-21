@interface VideosUI.SeparatorView : VideosUI.BaseCollectionReusableView {
    void /* unknown type, empty encoding */ lineHeight;
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ insets;
    void /* unknown type, empty encoding */ lineView;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
