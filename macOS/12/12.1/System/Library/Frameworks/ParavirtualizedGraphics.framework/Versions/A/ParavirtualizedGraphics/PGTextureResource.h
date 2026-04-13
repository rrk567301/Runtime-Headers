@class PGTask;
@protocol MTLTexture, MTLBuffer;

@interface PGTextureResource : PGResource {
    PGTask *_task;
    id<MTLTexture> _texture;
    id<MTLBuffer> _transferBuffer;
    unsigned long long _textureAllocationLength;
    unsigned int _textureVirtualPage;
    BOOL _generateMipmaps;
    struct { unsigned short x0 : 14; unsigned char x1 : 1; unsigned char x2 : 1; unsigned short x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; } x10[0]; } *_dimension;
}

+ (BOOL)validateTextureDimension:(struct { unsigned short x0 : 14; unsigned char x1 : 1; unsigned char x2 : 1; unsigned short x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; } x10[0]; } *)a0 dest:(struct { unsigned short x0 : 14; unsigned char x1 : 1; unsigned char x2 : 1; unsigned short x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; } x10[0]; } *)a1 mipLevels:(unsigned int)a2 generateMipmaps:(BOOL)a3 textureAllocationLength:(unsigned long long)a4 texture:(id)a5;

- (void)dealloc;
- (void)discard;
- (void)synchronizeInEncoder:(id)a0;
- (void)synchronizeAndDiscardInEncoder:(id)a0;
- (id)getResource;
- (id)getTexture;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 descriptor:(void *)a2 descriptorLength:(unsigned int)a3 texture:(id)a4;
- (void)prepareInEncoder:(id)a0;
- (void)replacePhysical:(id)a0;
- (void)ensurePhysical;
- (void)pageTextureInEncoder:(id)a0 isDownload:(BOOL)a1;

@end
