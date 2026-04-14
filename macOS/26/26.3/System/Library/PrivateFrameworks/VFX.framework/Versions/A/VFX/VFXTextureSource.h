@interface VFXTextureSource : NSObject {
    id _mtlTextureCache;
    void /* unknown type, empty encoding */ _size;
}

- (void)setSize:(SEL)a0;
- (void)dealloc;
- (double)nextFrameTime;
- (void /* unknown type, empty encoding */)textureSize;
- (id)MTLTextureCache;
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; unsigned char x6 : 8; unsigned char x7 : 7; unsigned char x8 : 1; })a1 nextFrameTime:(double *)a2 status:(struct { BOOL x0; BOOL x1; } *)a3;
- (void)renderWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; unsigned char x6 : 8; unsigned char x7 : 7; unsigned char x8 : 1; })a1 nextFrameTime:(double *)a2;
- (void)setMTLTextureCache:(id)a0;
- (BOOL)shouldFlip;
- (BOOL)supportsMetal;

@end
