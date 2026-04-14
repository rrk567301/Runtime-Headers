@interface HMDCameraRecordingEventObserver : NSObject <HMMLogEventObserver, HMMDailyTaskRunner> {
    void /* unknown type, empty encoding */ startMutex;
    void /* unknown type, empty encoding */ analyzerDataSource;
    void /* unknown type, empty encoding */ currentHomeDataSource;
}

- (void)runDailyTask;
- (void)observeEvent:(id)a0;
- (void)start;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (id)logEventForCurrentHomeWithDate:(id)a0;
- (void)handleRecordingSessionLogEvent:(id)a0;
- (void)deleteCountersBefore:(BOOL)a0 date:(id)a1;
- (void)handleRecordingUploadOperationEvent:(id)a0;
- (id)initWithAnalyzerDataSource:(id)a0 currentHomeDataSource:(id)a1;

@end
