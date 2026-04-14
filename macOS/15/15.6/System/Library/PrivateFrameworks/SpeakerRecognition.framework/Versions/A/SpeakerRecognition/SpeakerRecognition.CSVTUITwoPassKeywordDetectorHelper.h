@interface SpeakerRecognition.CSVTUITwoPassKeywordDetectorHelper : NSObject <SpeakerRecognition.CSVTUIKeywordDetectorProtocol> {
    void /* unknown type, empty encoding */ keywordAnalyzer;
    void /* unknown type, empty encoding */ phraseDetector;
    void /* unknown type, empty encoding */ keywordThreshold;
    void /* unknown type, empty encoding */ audioBuffer;
    void /* unknown type, empty encoding */ extraSamplesAtStart;
    void /* unknown type, empty encoding */ analyzerTrailingSamples;
    void /* unknown type, empty encoding */ supportsMph;
    void /* unknown type, empty encoding */ isFirstPassTriggered;
    void /* unknown type, empty encoding */ firstPassResult;
    void /* unknown type, empty encoding */ totalSamples;
    void /* unknown type, empty encoding */ startSampleCount;
    void /* unknown type, empty encoding */ audioFileWriter;
    void /* unknown type, empty encoding */ audioFileWriterSecondPass;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithAsset:(id)a0;
- (id)initWithSecureAsset:(id)a0 supportMph:(BOOL)a1;
- (id)analyzeWithBuffer:(id)a0;
- (id)initWithAsset:(id)a0 supportMph:(BOOL)a1;
- (id)initWithSecureAsset:(id)a0;
- (BOOL)isRunningTwoPass;
- (id)triggeredUtteranceWithVoiceTriggerEventInfo:(id)a0;

@end
