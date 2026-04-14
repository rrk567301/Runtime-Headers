@protocol MTLResidencySet;

@interface CMIMetalResourceCache : NSObject {
    struct __CVMetalTextureCache { } *_textureCache;
    struct __CVMetalBufferCache { } *_bufferCache;
    id<MTLResidencySet> _residencySet;
}

- (void)flush;
- (void).cxx_destruct;
- (id)initWithMetalDevice:(id)a0;
- (void)dealloc;
- (id)getBufferFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)getTextureFromPixelBuffer:(struct __CVBuffer { } *)a0 planeIndex:(int)a1 pixelFormat:(unsigned long long)a2 usage:(unsigned long long)a3;
- (void)makeResidentOnCommandBuffer:(id)a0;

@end
