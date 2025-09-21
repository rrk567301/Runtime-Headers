@class PXGTitleSubtitleViewConfiguration;

@interface PXGTitleSubtitleView : PXTitleSubtitleNSLabel <PXGReusableView>

@property (copy, nonatomic) PXGTitleSubtitleViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) char shouldReuseWhenInvisible;
@property (readonly, nonatomic) char canUnloadWhenInvisible;
@property (readonly, nonatomic) char isFloating;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (void)becomeReusable;

@end
