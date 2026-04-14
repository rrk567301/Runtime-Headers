@class PTEffectUtil, NSString, PTUtil, PTEspressoGenericExecutor;
@protocol MTLCommandQueue, MTLDevice, MTLTexture;

@interface PTRenderEffectNetwork : NSObject {
    PTEspressoGenericExecutor *_executor;
    NSString *_reinjectDisparity;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    struct __CVBuffer { } *_inRGBAAppleDepthRunner;
    struct __CVBuffer { } *_outDisparityAppleDepthRunner;
    struct __CVBuffer { } *_inTemporalDisparityAppleDepthRunner;
    id<MTLTexture> _inRGBA;
    id<MTLTexture> _inRGBARotated;
    id<MTLTexture> _disparityInOut[2];
    id<MTLTexture> _outDisparityRotated;
    struct __CVBuffer { } *_inputPixelBuffer;
    NSString *_inRGBAName;
    PTEffectUtil *_effectUtil;
    PTUtil *_util;
    BOOL _useHighResNetwork;
    int _frameId;
    int _outDispIndex;
    int _inDispIndex;
}

@property long long frameIndex;

+ (id)lastNetworkVersion;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)networkVersion;
- (BOOL)rotated;
- (id)getMTLTextureFromCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)inRGBA;
- (unsigned int)executeNetwork;
- (unsigned long long)getLayoutFromSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 commandQueue:(id)a3 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 effectUtil:(id)a5 util:(id)a6 useHighResNetwork:(BOOL)a7 sharedResources:(id)a8;
- (id)findTensorNameUsingReflection:(id)a0 name:(id)a1;
- (void)bindColorInputPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)inPrevDisparity;
- (id)outDisparity;
- (void)dumpNetworkInputWithDefaults:(id)a0;
- (void)dumpNetworkOutputWithDefaults:(id)a0;
- (BOOL)highResNetwork;

@end
