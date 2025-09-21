@interface SensitiveContentAnalysis.VideoStreamAnalyzer : NSObject {
    void /* unknown type, empty encoding */ analysisChangedHandler;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ _mode;
    void /* unknown type, empty encoding */ _analysisResult;
    void /* unknown type, empty encoding */ _streamOrientation;
    void /* unknown type, empty encoding */ sampleTimer;
    void /* unknown type, empty encoding */ currentCaptureDeviceInput;
    void /* unknown type, empty encoding */ proxyBlockCounter;
    void /* unknown type, empty encoding */ latestFrameDetails;
    void /* unknown type, empty encoding */ fullyInitialized;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
