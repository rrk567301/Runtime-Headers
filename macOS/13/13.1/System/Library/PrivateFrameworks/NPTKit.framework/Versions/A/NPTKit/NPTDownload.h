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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)startTasks;
- (void)progress:(id)a0;
- (void)setupTimer;
- (id)initWithNetworkActivityParent:(id)a0 testConfiguration:(id)a1;
- (void)cancelDispatchTimerAndSession;
- (void)cancelDispatchTimer;
- (double)checkAndReturnSpeedStablized:(id)a0;
- (BOOL)isTimerCancelledError:(id)a0;
- (BOOL)inTimedMode;
- (BOOL)isLastTask;
- (id)checkInterfaceSpecified;
- (id)realTimeSpeedMetricOverall;
- (double)minNonZeroValue:(double)a0 comparisonValue:(double)a1;
- (id)aggregateResults;
- (BOOL)finishedAllTasks;
- (id)processNQResult:(id)a0;
- (void)startDownloadWithCompletion:(id /* block */)a0;
- (void)startNQDownloadWithCompletion:(id /* block */)a0;
- (void)startLegacyDownloadWithCompletion:(id /* block */)a0;
- (void)kickOffNewDownload;
- (id)setupNewDownloadTask;
- (id)realTimeSpeedMetric:(unsigned long long)a0;
- (id)overAllResultByTask:(unsigned long long)a0;

@end
