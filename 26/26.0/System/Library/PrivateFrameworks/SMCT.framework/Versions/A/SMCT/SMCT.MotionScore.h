@interface SMCT.MotionScore : NSObject {
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ library;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ textureCache;
    void /* unknown type, empty encoding */ isFirstFrame;
    void /* unknown type, empty encoding */ frameRate;
    void /* unknown type, empty encoding */ prevTexture;
    void /* unknown type, empty encoding */ motionMapTexture;
    void /* unknown type, empty encoding */ motionMapMeanTexture;
    void /* unknown type, empty encoding */ motionMapMeanBytes;
    void /* unknown type, empty encoding */ mean;
    void /* unknown type, empty encoding */ motionMapMeanAndVarianceTexture;
    void /* unknown type, empty encoding */ motionMapMeanAndVarianceBytes;
    void /* unknown type, empty encoding */ meanAndVariance;
    void /* unknown type, empty encoding */ computePipelineState;
    void /* unknown type, empty encoding */ computeThreads;
}

- (id)init;
- (void).cxx_destruct;
- (id)computeMeanAndStdWithCurrFrame:(struct __CVBuffer { } *)a0;
- (id)initWithWidth:(long long)a0 height:(long long)a1 frameRate:(float)a2;
- (float)computeWithCurrFrame:(struct __CVBuffer { } *)a0;

@end
