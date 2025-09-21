@class PXGNamedImageViewConfiguration;

@interface PXGNamedImageView : UXImageView <PXGReusableView>

@property (copy, nonatomic) PXGNamedImageViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

- (id)accessibilityRole;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)becomeReusable;

@end
