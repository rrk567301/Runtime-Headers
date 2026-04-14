@interface NSCGSContext : NSGraphicsContext {
    struct CGContext { } *_cgsContext;
}

+ (id)graphicsContextWithAttributes:(id)a0;

- (void)dealloc;
- (void)_invalidate;
- (BOOL)isFlipped;
- (void)saveGraphicsState;
- (void)restoreGraphicsState;
- (unsigned int)windowID;
- (void *)graphicsPort;
- (struct CGPoint { double x0; double x1; })patternPhase;
- (void)setPatternPhase:(struct CGPoint { double x0; double x1; })a0;
- (void)_releaseCIContext;
- (void)flushGraphics;
- (struct CGContext { } *)_swapContextForCarbonDrawing:(struct CGContext { } *)a0;
- (void)setShouldAntialias:(BOOL)a0;
- (BOOL)shouldAntialias;
- (void)setImageInterpolation:(unsigned long long)a0;
- (unsigned long long)imageInterpolation;
- (void)setCompositingOperation:(unsigned long long)a0;
- (unsigned long long)compositingOperation;
- (long long)colorRenderingIntent;
- (void)setColorRenderingIntent:(long long)a0;
- (id)CIContext;

@end
