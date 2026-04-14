@interface SMCT.ExtremeDisparity : NSObject {
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ library;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ textureCache;
    void /* unknown type, empty encoding */ vtTransferSession;
    void /* unknown type, empty encoding */ analysisWidth;
    void /* unknown type, empty encoding */ analysisHeight;
    void /* unknown type, empty encoding */ leftBGRAPixelBuffer;
    void /* unknown type, empty encoding */ rightBGRAPixelBuffer;
    void /* unknown type, empty encoding */ minMaxFinder;
    void /* unknown type, empty encoding */ blurFilter;
    void /* unknown type, empty encoding */ opticalFlowPixelFormat;
    void /* unknown type, empty encoding */ executor;
    void /* unknown type, empty encoding */ ADLKTOpticalFlowBuffer;
    void /* unknown type, empty encoding */ opticalFlowMinMax;
    void /* unknown type, empty encoding */ normalizeFlowPipelineState;
    void /* unknown type, empty encoding */ normalizeFlowthreads;
    void /* unknown type, empty encoding */ normalizedFlow;
    void /* unknown type, empty encoding */ histogramInfo;
}

- (id)init;
- (void).cxx_destruct;
- (id)computeWithLeftBuffer:(struct __CVBuffer { } *)a0 rightBuffer:(struct __CVBuffer { } *)a1 percentile:(float)a2;
- (id)initWithWidth:(long long)a0 height:(long long)a1 analysisWidth:(long long)a2 analysisHeight:(long long)a3;

@end
