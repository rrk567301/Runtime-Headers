@interface _NSSplitViewShadowView : NSView {
    double _shadowRevealAmount;
}

@property double shadowRevealAmount;
@property unsigned long long shadowEdge;

- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isOpaque;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)getShadowImage;
- (BOOL)shouldBeArchived;
- (BOOL)wantsUpdateLayer;

@end
