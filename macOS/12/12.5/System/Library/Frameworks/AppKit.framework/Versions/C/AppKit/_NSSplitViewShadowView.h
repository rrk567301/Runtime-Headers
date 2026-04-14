@interface _NSSplitViewShadowView : NSView {
    double _shadowRevealAmount;
}

@property double shadowRevealAmount;
@property unsigned long long shadowEdge;

- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldBeArchived;
- (id)getShadowImage;

@end
