@class NSString;

@interface _SNAudioStreamAnalyzer : NSObject {
    void /* unknown type, empty encoding */ receivedBufferCount;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ requests;
    void /* unknown type, empty encoding */ currentFormat;
    void /* unknown type, empty encoding */ analyzerQueue;
    void /* unknown type, empty encoding */ firstPassRecordingPredicate;
    void /* unknown type, empty encoding */ firstPassRecordingHistoryDuration;
    void /* unknown type, empty encoding */ sysdiagnoseHistoryDuration;
    void /* unknown type, empty encoding */ firstPassAnalyzer;
    void /* unknown type, empty encoding */ secondPassAnalyzers;
    void /* unknown type, empty encoding */ secondPassUltronReportOps;
    void /* unknown type, empty encoding */ firstPassUltronReportOps;
    void /* unknown type, empty encoding */ firstPassResultsHistory;
    void /* unknown type, empty encoding */ ringBuffer;
    void /* unknown type, empty encoding */ ringBufferWriteBufferList;
    void /* unknown type, empty encoding */ unregisterLogCollectHook;
    void /* unknown type, empty encoding */ combineAnalyzer;
}

@property (nonatomic, readonly) NSString *detailedDescription;

+ (void)deleteWAVAndTextFilesCreatedBeforeLastWeekInDirectory:(id)a0;
+ (BOOL)shouldLogRequests;
+ (BOOL)shouldLogResultsHistory;
+ (BOOL)shouldRecordSecondPass;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFormat:(id)a0 error:(id *)a1;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)analyzeAudioBuffer:(id)a0 atAudioFramePosition:(long long)a1;
- (void)_removeRequest:(id)a0;
- (void)removeRequest:(id)a0;
- (BOOL)_addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)_addSinglePassRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (void)_analyzeAudioBuffer:(id)a0 atAudioFramePosition:(long long)a1;
- (void)_removeSinglePassRequest:(id)a0;
- (BOOL)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (void)completeAnalysis;
- (void)recordFirstPassResult:(id)a0 forRequest:(id)a1;
- (void)removeAllRequests;
- (void)removeRequestAsync:(id)a0;
- (void)sendErrorToAllRequests:(id)a0;
- (void)updateHistoricalBufferSizeToMatchRequests;
- (void)writeDSPGraphDotFilesToDirectory:(id)a0;

@end
