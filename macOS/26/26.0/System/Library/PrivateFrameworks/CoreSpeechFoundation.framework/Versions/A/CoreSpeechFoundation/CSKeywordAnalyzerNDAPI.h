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

- (float)getThreshold;
- (void)_resetStartAnalyzeTime;
- (void)reset;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (id)getBestAnalyzedResultsFromAudioChunk:(id)a0;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (float)getLoggingThreshold;
- (void)_setStartAnalyzeTime:(unsigned long long)a0;
- (id)getAnalyzedResultsFromAudioChunk:(id)a0;
- (float)getRejectLoggingThreshold;
- (void)processAudioChunk:(id)a0;
- (id)getAnalyzedResults;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (id)getBestAnalyzedResults;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (void)resetBest;
- (id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)a0 phId:(unsigned long long)a1;
- (void)_processAudioChunk:(id)a0;
- (void).cxx_destruct;

@end
