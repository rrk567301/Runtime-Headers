@class NSString, PAOpenGLDevice;

@interface PATexture : NSObject <PAGLFramebufferAttachable> {
    unsigned long long _bufferSize;
    void *_buffer;
    struct PFIntSize_st { unsigned long long width; unsigned long long height; } _size;
    BOOL _flipped;
    int _glInternalFormat;
    unsigned int _glFormat;
    unsigned int _glType;
    unsigned long long _bitsPerComponent;
    unsigned long long _alignedBytesPerRow;
    unsigned int _textureID;
    unsigned int _fbo;
    struct CGColorSpace { } *_colorSpace;
}

@property (retain) NSString *textureName;
@property (readonly, nonatomic) BOOL opaque;
@property (nonatomic) unsigned int type;
@property (readonly, nonatomic) PAOpenGLDevice *device;

- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })size;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void *)buffer;
- (long long)bytesPerRow;
- (struct CGColorSpace { } *)colorSpace;
- (unsigned int)bitmapInfo;
- (unsigned long long)bufferSize;
- (id)ciImage;
- (struct CGImage { } *)newCGImage;
- (id)initWithSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0 colorSpace:(struct CGColorSpace { } *)a1 opaque:(BOOL)a2 flipped:(BOOL)a3 bitsPerComponent:(unsigned long long)a4 internalFormat:(int)a5 format:(unsigned int)a6 type:(unsigned int)a7 device:(id)a8;
- (long long)componentCount;
- (void)_makeGLTexture:(struct _CGLContextObject { } *)a0 textureRange:(BOOL)a1;
- (int)_calculateBytesPerRow:(long long)a0;
- (void)allocateBuffer:(unsigned long long)a0 bytesPerRow:(long long)a1;
- (void)_allocateBuffer:(long long)a0 clear:(BOOL)a1;
- (unsigned int)glTexture;
- (void)attachToFramebuffer:(id)a0 atPoint:(unsigned int)a1 context:(id)a2;
- (void)detachFromFramebuffer:(id)a0 atPoint:(unsigned int)a1 context:(id)a2;
- (id)initWithSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a0 colorSpace:(struct CGColorSpace { } *)a1 opaque:(BOOL)a2 device:(id)a3;
- (void)allocateBuffer;
- (struct CGContext { } *)newBitmapContext:(long long)a0 colorspace:(struct CGColorSpace { } *)a1 clear:(BOOL)a2;
- (void)uploadTextureData;
- (void)drawCIImage:(id)a0 withCIContext:(id)a1 cglContext:(struct _CGLContextObject { } *)a2;

@end
