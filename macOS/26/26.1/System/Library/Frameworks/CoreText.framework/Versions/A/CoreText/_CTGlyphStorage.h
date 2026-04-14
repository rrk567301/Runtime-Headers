@interface _CTGlyphStorage : NSObject {
    long long _count;
    const unsigned short *_glyphs;
    const double *_advanceWidths;
    const struct CGSize { double x0; double x1; } *_advances;
    const unsigned int *_props;
    const long long *_stringIndices;
}

- (void)sync;
- (void)setStringIndex:(long long)a0 atIndex:(long long)a1;
- (id)copyWithRange:(struct { long long x0; long long x1; })a0;
- (void)disposeGlyphStack;
- (long long)attachmentCountAtIndex:(long long)a0;
- (void)setGlyph:(unsigned short)a0 atIndex:(long long)a1;
- (void)pushGlyphAtIndex:(long long)a0;
- (void)setAdvance:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)puntStringIndicesInRange:(struct { long long x0; long long x1; })a0 by:(long long)a1;
- (void *)refCon;
- (struct CGPoint { double x0; double x1; })originAtIndex:(long long)a0;
- (const struct CGSize { double x0; double x1; } *)allocatedAdvances;
- (void)insertGlyphsAtRange:(struct { long long x0; long long x1; })a0;
- (void)setProps:(unsigned int)a0 atIndex:(long long)a1;
- (void)moveGlyphsFromRange:(struct { long long x0; long long x1; })a0 toIndex:(long long)a1;
- (id)initWithCount:(long long)a0;
- (void)resetOrigins:(struct { long long x0; long long x1; })a0;
- (void)swapGlyphsAtIndex:(long long)a0 withIndex:(long long)a1;
- (void)setAttachmentCount:(long long)a0 atIndex:(long long)a1;
- (BOOL)implementsOrigins;
- (void)initGlyphStackWithCapacity:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)popGlyphAtIndex:(long long)a0;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0 atIndex:(long long)a1;

@end
