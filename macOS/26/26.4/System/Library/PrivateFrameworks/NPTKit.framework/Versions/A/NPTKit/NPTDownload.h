@class NSDate, NSString, NSError, NSURLSession, NetworkQualityConfiguration, NSMutableDictionary, NetworkQualityAssessment, NPTPerformanceTestConfiguration, NPTMetricResult, NSObject, NSMutableArray, NSMutableURLRequest;
@protocol OS_dispatch_source, OS_nw_activity;

@interface NPTDownload : NSObject <NSSecureCoding, NetworkQualityDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSCopying> {
    NSURLSession *downloadSession;
    unsigned long long processedStreamEndCount;
    unsigned long long maxConcurrentStreams;
    NSDate *initialTime;
    NSMutableURLRequest *request;
    NSObject<OS_nw_activity> *activityParent;
    NSObject<OS_nw_activity> *downloadActivity;
    NSMutableDictionary *taskDict;
    NSObject<OS_dispatch_source> *timeoutTimer;
    NSMutableArray *buffer;
    double recentBufferTime;
    NSDate *endTimeAggregate;
    BOOL smartDownload;
    unsigned long long timedDownloadLength;
    double stableSpeedToLog;
    NSError *downloadError;
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

- (void)startTasks;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)overAllResultByTask:(unsigned long long)a0;
- (id)initWithNetworkActivityParent:(id)a0 testConfiguration:(id)a1;
- (id)realTimeSpeedMetricOverall;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)inTimedMode;
- (void)startLegacyDownloadWithCompletion:(id /* block */)a0;
- (BOOL)finishedAllTasks;
- (id)checkInterfaceSpecified;
- (id)aggregateResults;
- (BOOL)isTimerCancelledError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)cancel;
- (void)kickOffNewDownload;
- (BOOL)isLastTask;
- (id)setupNewDownloadTask;
- (void)setupTimer;
- (void)startDownloadWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (double)minNonZeroValue:(double)a0 comparisonValue:(double)a1;
- (void)cancelDispatchTimerAndSession;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)progress:(id)a0;
- (void)cancelDispatchTimer;
- (id)realTimeSpeedMetric:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)completeActivityWithReason:(int)a0;
- (double)checkAndReturnSpeedStablized:(id)a0;
- (void)startNQDownloadWithCompletion:(id /* block */)a0;
- (id)processNQResult:(id)a0;

@end
