@interface _UXSourceSplitViewShadowView : NSView

@property (nonatomic) double shadowRevealAmount;
@property (nonatomic) unsigned long long shadowEdge;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)makeShadowImage;

@end
