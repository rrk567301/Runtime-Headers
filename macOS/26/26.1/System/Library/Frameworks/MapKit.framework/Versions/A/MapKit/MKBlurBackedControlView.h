@class CAPortalLayer, NSView, MKBlurBackingView, MKBlurBackedControlProxy;

@interface MKBlurBackedControlView : NSView

@property (retain, nonatomic) NSView *displayControl;
@property (retain, nonatomic) NSView *maskControl;
@property (retain, nonatomic) MKBlurBackedControlProxy *proxyControl;
@property (retain, nonatomic) CAPortalLayer *maskPortal;
@property (retain, nonatomic) MKBlurBackingView *blurView;
@property (readonly, nonatomic) id control;

- (void)layout;
- (double)baselineOffsetFromBottom;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)addOrRemoveSubviews;
- (id)initWithControlClass:(Class)a0;

@end
