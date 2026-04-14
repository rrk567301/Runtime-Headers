@class NSString, NSViewAnimation;

@interface MarqueeView : NSView

@property (nonatomic) BOOL animating;
@property (retain, nonatomic) NSViewAnimation *animation;
@property (weak, nonatomic) id boundObject;
@property (retain, nonatomic) NSString *boundKeyPath;
@property (nonatomic) double cachedContentFittingWidth;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;
- (void)awakeFromNib;
- (id)_viewForFirstBaselineLayout;
- (id)_viewForLastBaselineLayout;
- (void)prepareForInterfaceBuilder;
- (void)finishInit;
- (void)_createMarqueeAnimationIfNeeded;
- (void)_tearDownMarqueeAnimation;
- (void)setMaskWidth:(double)a0;
- (double)_contentFittingWidth;

@end
