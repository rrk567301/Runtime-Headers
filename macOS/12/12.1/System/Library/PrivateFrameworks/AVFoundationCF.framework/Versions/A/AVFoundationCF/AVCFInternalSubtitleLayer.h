@interface AVCFInternalSubtitleLayer : CALayer

@property (nonatomic) struct OpaqueAVCFSubtitleLayer { } *subtitleLayerRef;

- (void)setNeedsDisplay;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
