@class PXGNamedImageViewConfiguration;

@interface PXGNamedImageView : UXImageView <PXGReusableView>

@property (copy, nonatomic) PXGNamedImageViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) char shouldReuseWhenInvisible;
@property (readonly, nonatomic) char canUnloadWhenInvisible;
@property (readonly, nonatomic) char isFloating;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityRole;
- (void)becomeReusable;

@end
