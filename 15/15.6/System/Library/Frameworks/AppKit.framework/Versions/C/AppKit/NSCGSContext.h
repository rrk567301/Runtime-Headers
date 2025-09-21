@interface NSCGSContext : NSGraphicsContext {
    struct CGContext { } *_cgsContext;
}

+ (id)graphicsContextWithAttributes:(id)a0;

- (void)dealloc;
- (id)CIContext;
- (char)shouldAntialias;
- (void)_invalidate;
- (void)_releaseCIContext;
- (long long)colorRenderingIntent;
- (unsigned long long)compositingOperation;
- (void)flushGraphics;
- (void *)graphicsPort;
- (unsigned long long)imageInterpolation;
- (char)isFlipped;
- (struct CGPoint { double x0; double x1; })patternPhase;
- (void)restoreGraphicsState;
- (void)saveGraphicsState;
- (void)setColorRenderingIntent:(long long)a0;
- (void)setCompositingOperation:(unsigned long long)a0;
- (void)setImageInterpolation:(unsigned long long)a0;
- (void)setPatternPhase:(struct CGPoint { double x0; double x1; })a0;
- (void)setShouldAntialias:(char)a0;
- (unsigned int)windowID;

@end
