@class PRImageView, PRMonogramView, NSData, PRLikeness;

@interface PRLikenessView : NSView {
    PRMonogramView *_monogramView;
    PRImageView *_imageView;
    unsigned long long _likenessType;
    NSData *_recipe;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    struct CGImage { } *_staticRepresentation;
}

@property (nonatomic, getter=isCircular) char circular;
@property (nonatomic) char highlighted;
@property (nonatomic) char shouldDecode;
@property (retain, nonatomic) PRLikeness *likeness;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)_imageForLikeness:(id)a0 completion:(id /* block */)a1;
- (char)_isLikenessEqual:(id)a0;
- (id)_monogramView;
- (void)_setDisplayedView:(id)a0;
- (char)_shouldRenderStaticRepresentation;
- (void)_updateViewForLikeness:(char)a0;
- (id)initWithLikeness:(id)a0;
- (void)setNeedsRedraw;

@end
