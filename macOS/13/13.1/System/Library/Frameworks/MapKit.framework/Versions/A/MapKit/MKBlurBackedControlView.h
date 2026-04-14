@class CAPortalLayer, NSView, MKBlurBackingView, MKBlurBackedControlProxy;

@interface MKBlurBackedControlView : NSView

@property (retain, nonatomic) NSView *displayControl;
@property (retain, nonatomic) NSView *maskControl;
@property (retain, nonatomic) MKBlurBackedControlProxy *proxyControl;
@property (retain, nonatomic) CAPortalLayer *maskPortal;
@property (retain, nonatomic) MKBlurBackingView *blurView;
@property (readonly, nonatomic) id control;

- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)viewDidChangeEffectiveAppearance;
- (double)baselineOffsetFromBottom;
- (id)initWithControlClass:(Class)a0;
- (void)addOrRemoveSubviews;

@end
