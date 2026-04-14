@interface _CTNativeGlyphStorage : _CTGlyphStorage {
    const long long *_attachCounts;
    const struct CGPoint { double x0; double x1; } *_origins;
    unsigned long long _retainCount;
    struct GlyphStack { long long x0; long long x1; struct GlyphStackEntry { unsigned short x0; struct CGSize { double x0; double x1; } x1; unsigned int x2; long long x3; long long x4; struct CGPoint { double x0; double x1; } x5; } x2[1]; } *_stack;
    long long _capacity;
    void *_preallocatedStorage;
}

+ (id)newWithCount:(long long)a0 capacity:(long long)a1;

- (BOOL)_tryRetain;
- (void)resetOrigins:(struct { long long x0; long long x1; })a0;
- (const struct CGSize { double x0; double x1; } *)allocatedAdvances;
- (void)setAdvance:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)pushGlyphAtIndex:(long long)a0;
- (BOOL)_isDeallocating;
- (void)popGlyphAtIndex:(long long)a0;
- (void)insertGlyphsAtRange:(struct { long long x0; long long x1; })a0;
- (void)setStringIndex:(long long)a0 atIndex:(long long)a1;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)setAttachmentCount:(long long)a0 atIndex:(long long)a1;
- (id)copyWithRange:(struct { long long x0; long long x1; })a0;
- (id)retain;
- (long long)attachmentCountAtIndex:(long long)a0;
- (void)initGlyphStackWithCapacity:(long long)a0;
- (void)setGlyph:(unsigned short)a0 atIndex:(long long)a1;
- (void)swapGlyphsAtIndex:(long long)a0 withIndex:(long long)a1;
- (oneway void)release;
- (void)setProps:(unsigned int)a0 atIndex:(long long)a1;
- (id)initWithCount:(long long)a0 capacity:(long long)a1;
- (struct CGPoint { double x0; double x1; })originAtIndex:(long long)a0;
- (void)moveGlyphsFromRange:(struct { long long x0; long long x1; })a0 toIndex:(long long)a1;
- (void)dealloc;
- (unsigned long long)retainCount;
- (BOOL)implementsOrigins;
- (void)puntStringIndicesInRange:(struct { long long x0; long long x1; })a0 by:(long long)a1;

@end
