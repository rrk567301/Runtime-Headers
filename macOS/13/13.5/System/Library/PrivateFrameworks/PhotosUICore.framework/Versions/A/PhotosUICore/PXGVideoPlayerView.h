@protocol NSCopying;

@interface PXGVideoPlayerView : UXView <PXGReusableView>

@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)becomeReusable;

@end
