@class NSString, pixelBuffer;
@protocol MTLTexture;

@interface VFXCaptureDeviceOutputConsumerSource : VFXTextureSource <VFXCaptureDeviceOutputConsumer> {
    struct { pixelBuffer *videoOutput; struct __CVBuffer *x0; id<MTLTexture> mtlTextureForRenderer; id<MTLTexture> mtlTextureColorMatched; id<MTLTexture> mtlTextureColorForColorMatchingComputeKernel; struct CGColorSpace *pixelBufferColorSpace; } _data;
    struct __CVMetalTextureCache { } *_textureCache;
    BOOL _videoMirrored;
    BOOL _automaticallyAdjustsVideoMirroring;
    BOOL _containsAlpha;
    unsigned long long _width;
    unsigned long long _height;
}

@property (nonatomic) BOOL automaticallyAdjustsVideoMirroring;
@property (nonatomic, getter=isVideoMirrored) BOOL videoMirrored;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (id)init;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)connectToProxy:(struct __CFXImageProxy { } *)a0;
- (void)setPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)_setPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)_setSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)containsAlpha;
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; unsigned char x6 : 8; unsigned char x7 : 7; unsigned char x8 : 1; })a1 nextFrameTime:(double *)a2 status:(struct { BOOL x0; BOOL x1; } *)a3;
- (void)setPixelBuffer:(struct __CVBuffer { } *)a0 fromDevice:(id)a1;
- (void)setSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 fromDevice:(id)a1;

@end
