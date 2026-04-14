@protocol MTLTexture, MTLBuffer, PGTask_Resource;

@interface PGTextureResource : PGResource {
    id<PGTask_Resource> _task;
    unsigned long long _textureAllocationLength;
    unsigned int _textureVirtualPage;
    BOOL _isPVRTC;
    id<MTLTexture> _texture;
    id<MTLBuffer> _transferBuffer;
}

@property (readonly) BOOL isDualPlane;

+ (BOOL)validateTextureDimension:(const struct **)a0 dest:(struct **)a1 mipLevels:(unsigned int)a2 generateMipmaps:(BOOL)a3 textureAllocationLength:(unsigned long long)a4 texture:(id)a5 planeCount:(unsigned int)a6 isPVRTC:(BOOL *)a7 features:(const struct APVFeatures { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; unsigned int x17; unsigned int x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; } *)a8;

- (void)dealloc;
- (void)discard;
- (void)devolatilize;
- (void)ensurePhysical;
- (id)getResource;
- (id)getTexture;
- (id)initWithTexture:(id)a0 texture:(id)a1;

@end
