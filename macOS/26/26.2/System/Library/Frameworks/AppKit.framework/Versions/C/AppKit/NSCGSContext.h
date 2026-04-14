@interface NSCGSContext : NSGraphicsContext {
    struct CGContext { } *_cgsContext;
}

+ (id)graphicsContextWithAttributes:(id)a0;

- (unsigned int)windowID;
- (void)restoreGraphicsState;
- (BOOL)isFlipped;
- (void)_invalidate;
- (void)saveGraphicsState;
- (void)dealloc;
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
