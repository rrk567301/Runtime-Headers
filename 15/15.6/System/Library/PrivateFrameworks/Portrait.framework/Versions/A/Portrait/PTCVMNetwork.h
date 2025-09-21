@class PTMetalContext, NSString, PTEffectUtil, PTUtil, PTEspressoGenericExecutor;
@protocol MTLTexture;

@interface PTCVMNetwork : NSObject {
    PTEspressoGenericExecutor *_executor;
    int _networkVersionID;
    NSString *_reinjectDisparity;
    PTMetalContext *_metalContext;
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
    char _useHighResNetwork;
    int _frameId;
    long long _frameIndex;
    int _outDispIndex;
    int _inDispIndex;
}

+ (id)lastNetworkVersion;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (char)rotated;
- (id)networkVersionString;
- (id)inPrevDisparity;
- (unsigned int)executeNetwork:(long long)a0;
- (void)bindColorInputPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)dumpNetworkInputWithDefaults:(id)a0;
- (void)dumpNetworkOutputWithDefaults:(id)a0;
- (unsigned long long)getLayoutFromSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (char)highResNetwork;
- (id)inRGBA;
- (id)initWithMetalContext:(id)a0 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 effectUtil:(id)a2 util:(id)a3 useHighResNetwork:(char)a4 sharedResources:(id)a5;
- (int)networkVersionID;
- (id)outDisparity;

@end
