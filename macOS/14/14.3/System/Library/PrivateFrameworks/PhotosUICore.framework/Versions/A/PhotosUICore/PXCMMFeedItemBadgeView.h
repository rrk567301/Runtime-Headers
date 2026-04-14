@class NSTextField, PXCMMFeedItemBadgeViewConfiguration, NSVisualEffectView;
@protocol NSCopying;

@interface PXCMMFeedItemBadgeView : NSView <PXGReusableView> {
    NSVisualEffectView *_backgroundEffectView;
    NSTextField *_titleLabel;
}

@property (copy, nonatomic) PXCMMFeedItemBadgeViewConfiguration *configuration;
@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

+ (id)_titleFont;
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 configuration:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)becomeReusable;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;

@end
