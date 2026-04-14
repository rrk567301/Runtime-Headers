@class CMIMetalResourceCache, FigMetalContext, NSMutableSet, FigMetalTextureDescriptor;
@protocol MTLComputePipelineState;

@interface CMIStyleEngineImageFactory : NSObject {
    CMIMetalResourceCache *_metalResourceCache;
    struct __CVMetalBufferCache { } *_metalBufferCache;
    NSMutableSet *_pixelBufferPools;
    id<MTLComputePipelineState> _computePipelineState[6];
    FigMetalContext *_metalContext;
    FigMetalTextureDescriptor *_textureDescriptor;
    unsigned int _textureCount;
}

@property (nonatomic) unsigned long long memoryPoolId;

- (void).cxx_destruct;
- (int)appendTextureArray:(id)a0 to:(id)a1 usingCommandBuffer:(id)a2;
- (int)copyInputTex:(id)a0 toOutputTex:(id)a1 byDeMuxingChannelsUsingCommandBuffer:(id)a2;
- (int)copyInputTex:(id)a0 toOutputTex:(id)a1 withScale:(float)a2 usingCommandBuffer:(id)a3;
- (id)createBufferFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)createBufferFromTexture:(id)a0;
- (struct { id x0; id x1; })createLumaChromaTexturesFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)createNewPixelBufferForTexture:(id)a0 withFormat:(int)a1;
- (struct __CVBuffer { } *)createPixelBufferFromTexture:(id)a0;
- (id)createTextureFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)createTextureWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 arrayLength:(unsigned long long)a2;
- (id)createTextureWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 arrayLength:(unsigned long long)a2 forceTextureArray:(BOOL)a3;
- (id)imageFromCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)imageFromCVPixelBuffer:(struct __CVBuffer { } *)a0 withMuxedPlaneCount:(unsigned int)a1;
- (id)imageFromCVPixelBuffer:(struct __CVBuffer { } *)a0 withMuxedPlaneCount:(unsigned int)a1 forceSingleChannel:(BOOL)a2;
- (id)imageFromMTLBuffer:(id)a0;
- (id)imageFromMTLTexutre:(id)a0;
- (id)initWithMetalResourceCache:(id)a0 metalBufferCache:(struct __CVMetalBufferCache { } *)a1 metalContext:(id)a2;
- (id)newImageWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2;
- (int)stackTexutreArrays:(id)a0 and:(id)a1 to:(id)a2 usingCommandBuffer:(id)a3;

@end
