@class NSDate, NSString, NSError, NSURLSession, NetworkQualityConfiguration, NSMutableDictionary, NetworkQualityAssessment, NPTPerformanceTestConfiguration, NPTMetricResult, NSObject, NSMutableArray, NSMutableURLRequest;
@protocol OS_dispatch_source, OS_nw_activity;

@interface NPTUpload : NSObject <NSSecureCoding, NetworkQualityDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSCopying> {
    NSURLSession *uploadSession;
    NSDate *initialTime;
    unsigned long long maxConcurrentStreams;
    unsigned long long processedStreamEndCount;
    NSMutableURLRequest *request;
    NSObject<OS_nw_activity> *activityParent;
    NSObject<OS_nw_activity> *uploadActivity;
    NSMutableDictionary *taskDict;
    NSObject<OS_dispatch_source> *timeoutTimer;
    NSMutableArray *buffer;
    double recentBufferTime;
    NSDate *endTimeAggregate;
    BOOL smartUpload;
    unsigned long long timedUploadLength;
    unsigned long long uploadFileSize;
    double stableSpeedToLog;
    NSError *uploadError;
    BOOL stopAtFileSizeEnabled;
    NSString *callingClient;
    double maxSpeedObserved;
    BOOL legacy;
    NPTPerformanceTestConfiguration *testConfig;
    NetworkQualityAssessment *nqTest;
    NetworkQualityConfiguration *nqConfig;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NPTMetricResult *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTimer;
- (BOOL)isLastTask;
- (id)aggregateResults;
- (BOOL)finishedAllTasks;
- (void)cancelDispatchTimerAndSession;
- (id)checkInterfaceSpecified;
- (id)realTimeSpeedMetricOverall;
- (id)initWithNetworkActivityParent:(id)a0 testConfiguration:(id)a1;
- (BOOL)inTimedMode;
- (id)processNQResult:(id)a0;
- (void)cleanUp;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)progress:(id)a0;
- (double)minNonZeroValue:(double)a0 comparisonValue:(double)a1;
- (void)completeActivityWithReason:(int)a0;
- (BOOL)isTimerCancelledError:(id)a0;
- (void)startTasks;
- (double)checkAndReturnSpeedStablized:(id)a0;
- (void)cancelDispatchTimer;
- (void)startUploadWithCompletion:(id /* block */)a0;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)startNQUploadWithCompletion:(id /* block */)a0;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)cancel;
- (void)encodeWithCoder:(id)a0;
- (id)createRandomDataOfSize:(unsigned long long)a0;
- (void)startLegacyUploadWithCompletion:(id /* block */)a0;
- (int)determineSuspensionThreshold;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (id)createHTTPBodyWithBoundary:(id)a0 usingData:(id)a1 withMimeType:(id)a2 withFileName:(id)a3;
- (void)removeTempFileNamed:(id)a0;
- (id)setupNewUploadTask:(unsigned long long)a0 suspensionThresholdEnum:(int)a1;
- (id)createTempFileWithData:(id)a0 named:(id)a1;
- (void)kickOffNewUpload:(long long)a0 suspensionThresholdEnum:(int)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
