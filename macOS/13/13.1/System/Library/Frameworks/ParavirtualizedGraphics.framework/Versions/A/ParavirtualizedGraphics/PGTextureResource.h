@class PGTask;
@protocol MTLTexture, MTLBuffer;

@interface PGTextureResource : PGResource {
    PGTask *_task;
    unsigned long long _textureAllocationLength;
    unsigned int _textureVirtualPage;
    BOOL _isPVRTC;
    id<MTLTexture> _texture;
    id<MTLBuffer> _transferBuffer;
}

@property (readonly) BOOL isDualPlane;

+ (BOOL)validateTextureDimension:(struct **)a0 dest:(struct **)a1 mipLevels:(unsigned int)a2 generateMipmaps:(BOOL)a3 textureAllocationLength:(unsigned long long)a4 texture:(id)a5 planeCount:(unsigned int)a6 isPVRTC:(BOOL *)a7 features:(const struct APVFeatures { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; } *)a8;

- (void)dealloc;
- (void)discard;
- (id)getResource;
- (id)getTexture;
- (void)ensurePhysical;
- (id)initWithTexture:(id)a0 texture:(id)a1;

@end
