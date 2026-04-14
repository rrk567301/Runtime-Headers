@class PXGTitleSubtitleViewConfiguration;

@interface PXGTitleSubtitleView : PXTitleSubtitleNSLabel <PXGReusableView>

@property (copy, nonatomic) PXGTitleSubtitleViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void)becomeReusable;

@end
