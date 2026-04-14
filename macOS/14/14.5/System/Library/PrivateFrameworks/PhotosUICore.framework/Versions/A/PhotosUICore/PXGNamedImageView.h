@class PXGNamedImageViewConfiguration;

@interface PXGNamedImageView : UXImageView <PXGReusableView>

@property (copy, nonatomic) PXGNamedImageViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityRole;
- (void)becomeReusable;

@end
