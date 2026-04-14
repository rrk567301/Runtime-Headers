@interface HMDCameraRecordingEventObserver : NSObject <HMMLogEventObserver> {
    void /* unknown type, empty encoding */ startMutex;
    void /* unknown type, empty encoding */ analyzerDataSource;
    void /* unknown type, empty encoding */ currentHomeDataSource;
}

- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)observeEvent:(id)a0;
- (void)handleRecordingSessionLogEvent:(id)a0;
- (void)handleRecordingUploadOperationEvent:(id)a0;
- (id)initWithAnalyzerDataSourceAny:(id)a0 currentHomeDataSource:(id)a1;

@end
