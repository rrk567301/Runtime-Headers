@interface SpeakerRecognition.CSVTUIKeywordDetectorHelper : NSObject <SpeakerRecognition.CSVTUIKeywordDetectorProtocol> {
    void /* unknown type, empty encoding */ keywordAnalyzer;
    void /* unknown type, empty encoding */ lastKeywordScore;
    void /* unknown type, empty encoding */ keywordThreshold;
    void /* unknown type, empty encoding */ audioBuffer;
    void /* unknown type, empty encoding */ extraSamplesAtStart;
}

- (id)initWithAsset:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSecureAsset:(id)a0 supportMph:(BOOL)a1;
- (id)analyzeWithBuffer:(id)a0;
- (id)initWithAsset:(id)a0 supportMph:(BOOL)a1;
- (id)initWithSecureAsset:(id)a0;
- (BOOL)isRunningTwoPass;
- (id)triggeredUtteranceWithVoiceTriggerEventInfo:(id)a0;

@end
