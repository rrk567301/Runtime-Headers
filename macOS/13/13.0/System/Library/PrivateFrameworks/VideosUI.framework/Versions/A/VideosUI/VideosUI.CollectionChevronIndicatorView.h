@interface VideosUI.CollectionChevronIndicatorView : VideosUI.BaseCollectionReusableView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ centerYOffset;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ isVisible;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageView;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (BOOL)isFlipped;

@end
