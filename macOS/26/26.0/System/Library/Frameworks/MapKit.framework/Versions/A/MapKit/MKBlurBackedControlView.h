@class CAPortalLayer, NSView, MKBlurBackingView, MKBlurBackedControlProxy;

@interface MKBlurBackedControlView : NSView

@property (retain, nonatomic) NSView *displayControl;
@property (retain, nonatomic) NSView *maskControl;
@property (retain, nonatomic) MKBlurBackedControlProxy *proxyControl;
@property (retain, nonatomic) CAPortalLayer *maskPortal;
@property (retain, nonatomic) MKBlurBackingView *blurView;
@property (readonly, nonatomic) id control;

- (double)baselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)layout;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)addOrRemoveSubviews;
- (id)initWithControlClass:(Class)a0;

@end
