@class CMIStyleEngineImageFactory;
@protocol MTLTexture, MTLBuffer;

@interface CMIStyleEngineImage : NSObject <NSCopying> {
    id<MTLTexture> _mtlTexture;
    struct { id<MTLTexture> luma; id<MTLTexture> chroma; } _lumaChromaTextures;
    id<MTLBuffer> _mtlBuffer;
    struct __CVBuffer { } *_cvPixelBuffer;
    CMIStyleEngineImageFactory *_factory;
}

@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long arrayLength;
@property (readonly, weak, nonatomic) id<MTLTexture> textureView;
@property (readonly, weak, nonatomic) id<MTLBuffer> bufferView;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBufferView;
@property (readonly, weak, nonatomic) id<MTLTexture> lumaTextureView;
@property (readonly, weak, nonatomic) id<MTLTexture> chromaTextureView;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dereference;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)appendImageToTextureArray:(id)a0 commandBuffer:(id)a1;
- (int)copyTo:(id)a0 commandBuffer:(id)a1;
- (int)copyTo:(id)a0 scale:(float)a1 commandBuffer:(id)a2;
- (id)imageByPrependingImageToTextureArray:(id)a0 commandBuffer:(id)a1;
- (id)imageWithPixelBufferFormat:(unsigned int)a0 commandBuffer:(id)a1;
- (id)imageWithPixelBufferFormat:(unsigned int)a0 commandBuffer:(id)a1 copyImage:(BOOL)a2;
- (id)imageWithPixelBufferFormat:(unsigned int)a0 commandBuffer:(id)a1 forceNewImage:(BOOL)a2;
- (id)imageWithPixelBufferFormat:(unsigned int)a0 scale:(float)a1 commandBuffer:(id)a2;
- (id)imageWithTextureArrayBacking:(id)a0;
- (id)imageWithTextureArrayBackingByDeMuxingChannels:(id)a0 channelCount:(unsigned int)a1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 muxedPlaneCount:(unsigned int)a1 factory:(id)a2 retain:(BOOL)a3;
- (id)initWithMTLBuffer:(id)a0 factory:(id)a1 retain:(BOOL)a2;
- (id)initWithMTLTexutre:(id)a0 factory:(id)a1 retain:(BOOL)a2;
- (id)weakCopy;

@end
