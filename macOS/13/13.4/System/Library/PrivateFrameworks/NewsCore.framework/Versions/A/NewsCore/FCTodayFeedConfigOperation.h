@class FCTodayFeedConfigResponse, FCCachePolicy, NSDictionary, NSData, NSError, FCTodayFeedConfigRequest, NFUnfairLock;
@protocol FCNewsAppConfiguration, FCContentContext;

@interface FCTodayFeedConfigOperation : FCOperation

@property (readonly, nonatomic) NFUnfairLock *completionLock;
@property (readonly, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) id<FCNewsAppConfiguration> appConfig;
@property (retain, nonatomic) NSData *resultCKConfigData;
@property (retain, nonatomic) NSDictionary *resultCKRecordsByType;
@property (retain, nonatomic) NSError *resultCKError;
@property (retain, nonatomic) NSData *resultNewsEdgeConfigData;
@property (retain, nonatomic) NSError *resultNewsEdgeError;
@property (retain, nonatomic) FCTodayFeedConfigResponse *completedResponse;
@property (retain, nonatomic) NSError *completedError;
@property (readonly, copy, nonatomic) FCTodayFeedConfigRequest *request;
@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy) id /* block */ fetchCompletionHandler;

- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void)_fetchFromCKWithCompletion:(id /* block */)a0;
- (void)_fetchFromNewsEdgeWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 appConfig:(id)a1 request:(id)a2;

@end
