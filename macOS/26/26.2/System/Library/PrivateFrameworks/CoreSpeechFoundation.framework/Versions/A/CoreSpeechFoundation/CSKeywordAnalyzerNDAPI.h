@class CSNovDetector;

@interface CSKeywordAnalyzerNDAPI : NSObject {
    CSNovDetector *_novDetector;
    unsigned long long _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    unsigned long long _lastSampleFed;
    unsigned long long _sampleFedWrapAroundOffset;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) unsigned int activePhId;

- (float)getLoggingThreshold;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (float)getThreshold;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (void)reset;
- (id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)a0 phId:(unsigned long long)a1;
- (void)_processAudioChunk:(id)a0;
- (id)getBestAnalyzedResults;
- (void).cxx_destruct;
- (void)processAudioChunk:(id)a0;
- (id)getAnalyzedResults;
- (id)getAnalyzedResultsFromAudioChunk:(id)a0;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (float)getRejectLoggingThreshold;
- (void)_resetStartAnalyzeTime;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (void)_setStartAnalyzeTime:(unsigned long long)a0;
- (id)getBestAnalyzedResultsFromAudioChunk:(id)a0;
- (void)resetBest;

@end
