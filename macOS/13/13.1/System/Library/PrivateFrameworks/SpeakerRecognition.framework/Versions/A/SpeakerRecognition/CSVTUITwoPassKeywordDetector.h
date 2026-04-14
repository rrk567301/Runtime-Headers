@class CSAudioCircularBuffer, CSPhraseDetector, CSKeywordAnalyzerNDAPI;

@interface CSVTUITwoPassKeywordDetector : CSVTUIKeywordDetector {
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    CSPhraseDetector *_phraseDetector;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    unsigned long long _extraSamplesAtStart;
    unsigned long long _analyzerTrailingSamples;
}

- (void).cxx_destruct;
- (void)reset;
- (id)initWithAsset:(id)a0;
- (id)analyze:(id)a0;
- (id)triggeredUtterance:(id)a0;
- (unsigned long long)_sampleLengthFrom:(unsigned int)a0 To:(unsigned int)a1;

@end
