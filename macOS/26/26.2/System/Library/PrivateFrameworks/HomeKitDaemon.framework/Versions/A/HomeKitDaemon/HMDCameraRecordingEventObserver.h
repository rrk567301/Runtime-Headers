@interface HMDCameraRecordingEventObserver : NSObject <HMMLogEventObserver, HMMDailyTaskRunner> {
    void /* unknown type, empty encoding */ startMutex;
    void /* unknown type, empty encoding */ analyzerDataSource;
    void /* unknown type, empty encoding */ currentHomeDataSource;
}

- (void)observeEvent:(id)a0;
- (void)runDailyTask;
- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (id)init;
- (id)logEventForCurrentHomeWithDate:(id)a0;
- (void)handleRecordingSessionLogEvent:(id)a0;
- (void)deleteCountersBefore:(BOOL)a0 date:(id)a1;
- (void)handleRecordingUploadOperationEvent:(id)a0;
- (id)initWithAnalyzerDataSource:(id)a0 currentHomeDataSource:(id)a1;

@end
