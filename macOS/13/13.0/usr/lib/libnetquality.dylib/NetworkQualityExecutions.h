@class NSDate, NSString, NetworkQualityRemoteConfiguration, NSURLSession, LatencyURLSessionDelegate, NSOperationQueue, NetworkQualityExecutionsReporter, NetworkQualityConfiguration, NSObject, NetworkQualityExecutionsResult, ThroughputDelegate;
@protocol OS_dispatch_queue, NetworkQualityExecutionsDelegate;

@interface NetworkQualityExecutions : NSObject <NSURLSessionDelegate> {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_executionsQueue;
    ThroughputDelegate *dlDelegate;
    ThroughputDelegate *ulDelegate;
    LatencyURLSessionDelegate *latencyDelegate;
    NSURLSession *_configSession;
    BOOL cancelled;
    NetworkQualityRemoteConfiguration *remoteConfig;
    NetworkQualityExecutionsReporter *resultsReporter;
    struct test_context { struct test *test; struct execution *execution; BOOL fast; NetworkQualityRemoteConfiguration *config; } tp_ul_multi;
    struct test_context { struct test *test; struct execution *execution; BOOL fast; NetworkQualityRemoteConfiguration *config; } tp_dl_multi;
    BOOL reportComplete;
    NetworkQualityConfiguration *config;
    NetworkQualityExecutionsResult *_progressResults;
    id<NetworkQualityExecutionsDelegate> _delegate;
    id /* block */ _completionHandler;
    int _stage;
    NSDate *_start;
    NSDate *_timeout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)ratingForResponsivenessScore:(long long)a0;

- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)cancel;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)drain;
- (id)initWithConfiguration:(id)a0;
- (id)initWithInterfaceName:(id)a0;
- (void)runWithCompletionHandler:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (void)executeFastWithDownloadProgressHandler:(id /* block */)a0 uploadProgressHandler:(id /* block */)a1 downloadCompletionHandler:(id /* block */)a2 uploadCompletionHandler:(id /* block */)a3 responsivenessCompletionHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)createDefaultNSURLSessionConfiguration;
- (id)createDefaultRequestwithURL:(id)a0;
- (void)shareProgress;
- (void)reportingCompletionHandler:(id)a0;
- (void)setTimeout;
- (void)captureError:(id)a0;
- (void)invokeReporterWithResults:(id)a0;
- (void)execDLWithCompletionHandler:(id /* block */)a0;
- (void)execULWithCompletionHandler:(id /* block */)a0;
- (void)initializeResultsReporterWithDefaults;
- (void)execParallelWithCompletionHandler:(id /* block */)a0;
- (void)reallyExecuteFast;
- (void)reallyExecuteDL;
- (void)reallyExecuteUL;
- (void)_cancelWithOptionalError:(id)a0;
- (id)getResultsReporter;

@end
