@class CSKeywordAnalyzerNDAPI, CSKeywordAnalyzerNDAPIResult, CSPhraseDetector, CSAudioCircularBuffer;

@interface CSVTUITwoPassKeywordDetector : CSVTUIKeywordDetector {
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    CSPhraseDetector *_phraseDetector;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    unsigned long long _extraSamplesAtStart;
    unsigned long long _analyzerTrailingSamples;
    char _isFirstPassTriggered;
    CSKeywordAnalyzerNDAPIResult *_firstPassResult;
    char _supportsMph;
}

- (void).cxx_destruct;
- (void)reset;
- (id)initWithAsset:(id)a0;
- (unsigned long long)_sampleLengthFrom:(unsigned int)a0 To:(unsigned int)a1;
- (id)analyzeWithBuffer:(id)a0;
- (id)initWithAsset:(id)a0 supportMph:(char)a1;
- (void)internalReset;
- (char)isRunningTwoPass;
- (id)triggeredUtteranceWithVoiceTriggerEventInfo:(id)a0;

@end
