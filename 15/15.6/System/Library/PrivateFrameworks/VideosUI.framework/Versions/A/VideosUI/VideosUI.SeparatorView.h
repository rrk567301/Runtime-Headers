@interface VideosUI.SeparatorView : VideosUI.BaseCollectionReusableView {
    void /* unknown type, empty encoding */ lineHeight;
    void /* unknown type, empty encoding */ color;
    void /* unknown type, empty encoding */ insets;
    void /* unknown type, empty encoding */ lineView;
}

@property (nonatomic, readonly) char flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(char)a1;

@end
