@class NSTextField;
@protocol NSCopying;

@interface PXStickersReviewDecorationView : NSView <PXGDecorationView> {
    NSTextField *_label;
}

@property (nonatomic) unsigned long long decorationOptions;
@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) char shouldReuseWhenInvisible;
@property (readonly, nonatomic) char canUnloadWhenInvisible;
@property (readonly, nonatomic) char isFloating;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)becomeReusable;
- (float)_scoreForAssetReference:(id)a0;

@end
