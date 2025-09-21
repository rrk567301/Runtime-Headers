@interface AVCFInternalSubtitleLayer : CALayer

@property (nonatomic) struct OpaqueAVCFSubtitleLayer { } *subtitleLayerRef;

- (void)setNeedsDisplay;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)layerDidBecomeVisible:(char)a0;

@end
