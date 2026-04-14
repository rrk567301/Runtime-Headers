@class NSString, NSDictionary, NSURL, NSData, FCURLRequestScheduler, FCNetworkEvent;
@protocol FCNetworkBehaviorMonitor;

@interface FCAssetDownloadOperation : FCNetworkOperation

@property (retain, nonatomic) FCURLRequestScheduler *scheduler;
@property (retain, nonatomic) NSURL *downloadedFileURL;
@property (retain, nonatomic) NSData *downloadedData;
@property (retain, nonatomic) NSString *requestUUID;
@property (retain, nonatomic) FCNetworkEvent *networkEvent;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *loggingKey;
@property (nonatomic) long long downloadDestination;
@property (nonatomic) int networkEventType;
@property (nonatomic) unsigned long long cachePolicy;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (retain, nonatomic) id<FCNetworkBehaviorMonitor> networkBehaviorMonitor;
@property (copy, nonatomic) id /* block */ fileDownloadCompletionHandler;
@property (copy, nonatomic) id /* block */ dataDownloadCompletionHandler;

+ (id)sharedURLSession;
+ (id)sharedURLRequestScheduler;

- (void)prepareOperation;
- (id)initWithNetworkReachability:(id)a0;
- (BOOL)areNetworkRequirementsSatisfiedWithReachability:(id)a0 offlineReason:(long long *)a1;
- (BOOL)validateOperation;
- (void)performOperation;
- (id)initWithNetworkReachability:(id)a0 URLRequestScheduler:(id)a1;
- (void)operationWillFinishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)throttleGroup;
- (unsigned long long)maxRetries;

@end
