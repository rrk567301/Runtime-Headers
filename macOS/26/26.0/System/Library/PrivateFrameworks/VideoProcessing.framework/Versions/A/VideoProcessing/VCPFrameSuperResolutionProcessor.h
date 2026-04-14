@interface VCPFrameSuperResolutionProcessor : NSObject {
    void *_vcpcnnframeenhancer;
    long long _sourceWidth;
    long long _sourceHeight;
    long long _resizeWidth;
    long long _resizeHeight;
    float _scalingFactor;
    long long _extendRight;
    long long _extendBottom;
    struct __CVBuffer { } *_resizeSourceBuffer;
    struct __CVBuffer { } *_resizeDestinationBuffer;
    struct OpaqueVTPixelTransferSession { } *_sourceToResizePixelTransferSession;
    struct OpaqueVTPixelTransferSession { } *_resizeToSourcePixelTransferSession;
    long long _supportedPixelFormat;
    BOOL _in_memory_reshape;
    BOOL _msr;
}

- (void)dealloc;
- (id)init;
- (BOOL)finishProcessing;
- (BOOL)processWithSourceFrame:(struct __CVBuffer { } *)a0 destinationframe:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (BOOL)startSessionWithConfigurationMode:(id)a0 error:(id *)a1;
- (BOOL)setupPixelTransferSessions:(const struct { float x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; } *)a0;

@end
