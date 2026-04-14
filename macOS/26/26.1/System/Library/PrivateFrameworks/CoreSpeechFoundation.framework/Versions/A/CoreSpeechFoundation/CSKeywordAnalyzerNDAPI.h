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

- (id)getBestAnalyzedResultsFromAudioChunk:(id)a0;
- (id)getAnalyzedResultsFromAudioChunk:(id)a0;
- (float)getLoggingThreshold;
- (id)getBestAnalyzedResults;
- (float)getRejectLoggingThreshold;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (void)processAudioChunk:(id)a0;
- (void)resetBest;
- (float)getThreshold;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (void)reset;
- (void)_processAudioChunk:(id)a0;
- (id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)a0 phId:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_setStartAnalyzeTime:(unsigned long long)a0;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (void)_resetStartAnalyzeTime;
- (id)getAnalyzedResults;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;

@end
