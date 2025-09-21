@class AVPlayer, pixelBuffer;
@protocol MTLTexture;

@interface VFXAVPlayerSource : VFXTextureSource {
    AVPlayer *_player;
    struct { pixelBuffer *videoOutput; struct __CVBuffer *x0; id<MTLTexture> mtlTextureForRenderer; id<MTLTexture> mtlTextureColorMatched; id<MTLTexture> mtlTextureColorForColorMatchingComputeKernel; struct CGColorSpace *pixelBufferColorSpace; } _data;
    struct __CVMetalTextureCache { } *_textureCache;
    unsigned long long _width;
    unsigned long long _height;
}

@property (retain, nonatomic) AVPlayer *player;

- (void)dealloc;
- (id)init;
- (void)connectToProxy:(struct __CFXImageProxy { } *)a0;
- (id)metalTextureWithEngineContext:(struct __CFXEngineContext { } *)a0 textureSampler:(struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; unsigned char x6 : 8; unsigned char x7 : 7; unsigned char x8 : 1; })a1 nextFrameTime:(double *)a2 status:(struct { BOOL x0; BOOL x1; } *)a3;
- (void)registerPlayerIfNeeded:(id)a0;
- (void)unregisterPlayer:(id)a0;

@end
