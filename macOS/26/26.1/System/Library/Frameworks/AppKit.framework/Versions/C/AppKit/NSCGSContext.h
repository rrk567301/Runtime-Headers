@interface NSCGSContext : NSGraphicsContext {
    struct CGContext { } *_cgsContext;
}

+ (id)graphicsContextWithAttributes:(id)a0;

- (void)_invalidate;
- (void)restoreGraphicsState;
- (void)dealloc;
- (unsigned int)windowID;
- (BOOL)isFlipped;
- (void)saveGraphicsState;
- (id)CIContext;
- (BOOL)shouldAntialias;
- (void)_releaseCIContext;
- (long long)colorRenderingIntent;
- (unsigned long long)compositingOperation;
- (void)flushGraphics;
- (void *)graphicsPort;
- (unsigned long long)imageInterpolation;
- (struct CGPoint { double x0; double x1; })patternPhase;
- (void)setColorRenderingIntent:(long long)a0;
- (void)setCompositingOperation:(unsigned long long)a0;
- (void)setImageInterpolation:(unsigned long long)a0;
- (void)setPatternPhase:(struct CGPoint { double x0; double x1; })a0;
- (void)setShouldAntialias:(BOOL)a0;

@end
