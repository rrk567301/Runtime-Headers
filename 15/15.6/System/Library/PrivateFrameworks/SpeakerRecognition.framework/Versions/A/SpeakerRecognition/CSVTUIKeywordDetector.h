@class CSAudioCircularBuffer, SSRTriggerPhraseDetectorNDAPI;

@interface CSVTUIKeywordDetector : NSObject {
    SSRTriggerPhraseDetectorNDAPI *_keywordAnalyzer;
    float _lastKeywordScore;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    unsigned long long _extraSamplesAtStart;
}

- (void).cxx_destruct;
- (void)reset;
- (id)initWithAsset:(id)a0;
- (unsigned long long)_sampleLengthFrom:(unsigned int)a0 To:(unsigned int)a1;
- (id)analyzeWithBuffer:(id)a0;
- (char)isRunningTwoPass;
- (id)triggeredUtteranceWithVoiceTriggerEventInfo:(id)a0;

@end
