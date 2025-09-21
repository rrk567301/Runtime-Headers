@class CSKeywordAnalyzerNDAPI, CSSyncKeywordAnalyzerQuasar, NSArray, NSMutableArray;

@interface CSPhraseDetector : NSObject

@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *syncKeywordAnalyzerNDAPI;
@property (retain, nonatomic) CSSyncKeywordAnalyzerQuasar *syncKeywordAnalyzerQuasar;
@property (retain, nonatomic) NSMutableArray *phraseDetectorInfos;
@property (nonatomic) unsigned long long nearMissDelayTimeout;
@property (nonatomic) unsigned long long nearMissCandidateDetectedSamples;
@property (nonatomic) char isSecondChance;
@property (retain, nonatomic) NSMutableArray *phraseResult;
@property (retain, nonatomic) NSArray *quasarCheckerResultAtCutOff;
@property (nonatomic) unsigned long long quasarCheckerCutOffSamplesCount;
@property (nonatomic) unsigned long long processedSampleCount;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setConfig:(id)a0;
- (id)getAnalyzedResultFromAudioChunk:(id)a0;
- (id)getAnalyzedResultFromFlushedAudio;
- (id)getLosingPhraseResultsWithDetectedPhId:(unsigned long long)a0;
- (id)phraseDetectorInfoFromPhId:(unsigned long long)a0;
- (void)setActiveChannel:(unsigned long long)a0;
- (void)setRunAsSecondChance:(char)a0;
- (id)_getResultWithPhId:(unsigned long long)a0 phraseDetectorInfo:(id)a1 ndapiResult:(id)a2 quasarResult:(id)a3 forceMaximized:(char)a4;
- (char)_isSecondChanceCandidateWithScore:(float)a0 effectiveThreshold:(float)a1 secondChanceThreshold:(float)a2;
- (id)_phraseDetectorResultFromNDAPIResults:(id)a0 quasarResult:(id)a1 forceMaximized:(char)a2;
- (id)_resultCopyWithKeywordDetectorDecision:(unsigned long long)a0 bestPhId:(unsigned long long)a1 phraseResult:(id)a2;

@end
