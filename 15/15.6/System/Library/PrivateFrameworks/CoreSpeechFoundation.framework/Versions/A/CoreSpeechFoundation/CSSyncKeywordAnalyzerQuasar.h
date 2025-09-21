@class _EARSyncSpeechRecognizer, NSDictionary;

@interface CSSyncKeywordAnalyzerQuasar : NSObject {
    _EARSyncSpeechRecognizer *_syncRecognizer;
    char _requireReset;
    char _preventDuplicatedReset;
    NSDictionary *_phToPhIdMap;
    unsigned long long _numPhrases;
}

@property (nonatomic) unsigned long long activeChannel;

+ (id)_phToPhIdMapFromTriggerTokensArray:(id)a0;
+ (void)dumpEARSpeechRecognitionResults:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (id)getAnalyzedResultsFromAudioChunk:(id)a0;
- (void)processAudioChunk:(id)a0;
- (id)_getAnalyzedResults:(id)a0;
- (void)flushAudio;
- (id)getResultsFromFlushedAudio;
- (id)initWithConfigPath:(id)a0 triggerTokensArray:(id)a1 preventDuplicatedReset:(char)a2 memoryLock:(char)a3;

@end
