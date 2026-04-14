@interface AVCFInternalSubtitleLayer : CALayer

@property (nonatomic) struct OpaqueAVCFSubtitleLayer { } *subtitleLayerRef;

- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)setNeedsDisplay;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
