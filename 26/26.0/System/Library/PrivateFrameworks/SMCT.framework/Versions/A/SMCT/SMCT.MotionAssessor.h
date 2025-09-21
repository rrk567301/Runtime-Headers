@interface SMCT.MotionAssessor : NSObject {
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ library;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ textureCache;
    void /* unknown type, empty encoding */ vtTransferSession;
    void /* unknown type, empty encoding */ isFirstFrame;
    void /* unknown type, empty encoding */ frameRate;
    void /* unknown type, empty encoding */ currPixelBuffer;
    void /* unknown type, empty encoding */ prevPixelBuffer;
    void /* unknown type, empty encoding */ option;
    void /* unknown type, empty encoding */ pixelFormat;
    void /* unknown type, empty encoding */ downsampleFlowPipelineState;
    void /* unknown type, empty encoding */ downsampleFlowthreads;
    void /* unknown type, empty encoding */ templateMatchPipelineState;
    void /* unknown type, empty encoding */ templateMatchthreads;
    void /* unknown type, empty encoding */ templateSize;
    void /* unknown type, empty encoding */ blockSize;
    void /* unknown type, empty encoding */ mean;
    void /* unknown type, empty encoding */ opticalFlow5x5;
    void /* unknown type, empty encoding */ perpMapTexture;
    void /* unknown type, empty encoding */ rotMapTexture;
    void /* unknown type, empty encoding */ hPanMapTexture;
    void /* unknown type, empty encoding */ vPanMapTexture;
    void /* unknown type, empty encoding */ perpMeanTexture;
    void /* unknown type, empty encoding */ rotMeanTexture;
    void /* unknown type, empty encoding */ hPanMeanTexture;
    void /* unknown type, empty encoding */ vPanMeanTexture;
    void /* unknown type, empty encoding */ perpMeanBytes;
    void /* unknown type, empty encoding */ rotMeanBytes;
    void /* unknown type, empty encoding */ hPanMeanBytes;
    void /* unknown type, empty encoding */ vPanMeanBytes;
    void /* unknown type, empty encoding */ executor;
    void /* unknown type, empty encoding */ ADLKTOpticalFlowBuffer;
    void /* unknown type, empty encoding */ centerCrop;
    void /* unknown type, empty encoding */ croppedPixelBuffer;
    void /* unknown type, empty encoding */ BGRAPixelBuffer;
    void /* unknown type, empty encoding */ croppedRect;
}

- (id)init;
- (void).cxx_destruct;
- (id)computeWithCurrFrame:(struct __CVBuffer { } *)a0;
- (id)computeWithOpticalFlowBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithWidth:(long long)a0 height:(long long)a1 analysisWidth:(long long)a2 analysisHeight:(long long)a3 frameRate:(float)a4 option:(unsigned long long)a5 centerCrop:(BOOL)a6;

@end
