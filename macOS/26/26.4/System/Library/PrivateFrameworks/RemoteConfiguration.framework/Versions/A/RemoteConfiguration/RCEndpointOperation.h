@class NSDictionary, NSURL, RCConfigurationSettings, NSObject, RCNetworkActivity;
@protocol OS_dispatch_queue;

@interface RCEndpointOperation : RCOperation

@property (retain, nonatomic) NSDictionary *configurationResourcesByRequestKey;
@property (retain, nonatomic) RCConfigurationSettings *configurationSettings;
@property (retain, nonatomic) NSDictionary *changeTagsByRequestKey;
@property (retain, nonatomic) NSURL *endpointURL;
@property (copy, nonatomic) id /* block */ configurationCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (copy, nonatomic) id /* block */ networkEventHandler;
@property (retain, nonatomic) RCNetworkActivity *networkActivity;

- (void)operationWillFinishWithError:(id)a0;
- (unsigned long long)maxRetries;
- (BOOL)validateOperation;
- (void)performOperation;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (id)requestDataForSettings:(id)a0;
- (void)resetForRetry;
- (void).cxx_destruct;
- (void)_fetchConfigurationWithSettings:(id)a0;

@end
