@protocol CRConfidenceThresholdProviding;

@interface TextRecognition.CREngineAccurate : _TtCs12_SwiftObject <TextRecognition.CRConfidenceThresholdProvidingFacade> {
    void /* unknown type, empty encoding */ confidenceThresholdProviderFacade;
    void /* unknown type, empty encoding */ recognizerStats;
    void /* unknown type, empty encoding */ lineWrappingStats;
    void /* unknown type, empty encoding */ tableStructureRecognitionStats;
    void /* unknown type, empty encoding */ formAnalyzerStats;
    void /* unknown type, empty encoding */ formDetectionStats;
    void /* unknown type, empty encoding */ formPostProcessingStats;
    void /* unknown type, empty encoding */ ocrDetector;
    void /* unknown type, empty encoding */ ocrRecognizer;
    void /* unknown type, empty encoding */ lineWrapper;
    void /* unknown type, empty encoding */ tableStructureRecognizer;
    void /* unknown type, empty encoding */ formAnalyzer;
    void /* unknown type, empty encoding */ ocrRecognizerTasks;
    void /* unknown type, empty encoding */ revision;
    void /* unknown type, empty encoding */ shouldCancel;
    void /* unknown type, empty encoding */ requestedComputeDevice;
    void /* unknown type, empty encoding */ _loadFormAnalyzerLock;
}

@property (nonatomic, readonly) id<CRConfidenceThresholdProviding> confidenceThresholdProvider;

@end
