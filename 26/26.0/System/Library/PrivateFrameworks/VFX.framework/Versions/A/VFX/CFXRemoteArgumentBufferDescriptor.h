@interface CFXRemoteArgumentBufferDescriptor : NSObject {
    struct { unsigned long long x0; unsigned int x1; unsigned int x2; } *_buffers;
    unsigned long long _bufferCount;
    struct { unsigned long long x0; unsigned int x1; } *_textures;
    unsigned long long _textureCount;
    struct { struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; unsigned char x6 : 8; unsigned char x7 : 7; unsigned char x8 : 1; } x0; unsigned int x1; } *_samplers;
    unsigned long long _samplersCount;
}

- (void)dealloc;
- (id)init;
- (void)patchArgumentBufferWithEncoder:(id)a0 encoderContext:(struct { id x0; struct __CFData *x1; id x2; id x3; })a1;
- (void)setBuffer:(unsigned long long)a0 offset:(unsigned long long)a1 at:(long long)a2;
- (void)setSampler:(struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; unsigned char x6 : 8; unsigned char x7 : 7; unsigned char x8 : 1; })a0 at:(long long)a1;
- (void)setTexture:(unsigned long long)a0 at:(long long)a1;

@end
