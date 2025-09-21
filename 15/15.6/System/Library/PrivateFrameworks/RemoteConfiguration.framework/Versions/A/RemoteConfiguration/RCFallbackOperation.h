@class NSString, NSURL, RCConfigurationResource, NSObject;
@protocol OS_dispatch_queue;

@interface RCFallbackOperation : RCOperation

@property (retain, nonatomic) RCConfigurationResource *configurationResource;
@property (retain, nonatomic) NSString *requestKey;
@property (retain, nonatomic) NSURL *fallbackURL;
@property (retain, nonatomic) RCConfigurationResource *cachedConfigurationResource;
@property (nonatomic) unsigned long long environment;
@property (nonatomic) char enableExtraLogs;
@property (copy, nonatomic) id /* block */ configurationCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) double fallbackTimeoutDuration;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *storefrontID;
@property (copy, nonatomic) id /* block */ networkEventHandler;

- (void).cxx_destruct;
- (void)performOperation;
- (void)_fetchConfigurationWithURL:(id)a0 requestKey:(id)a1 enableExtraLogs:(char)a2 fallbackTimeoutDuration:(double)a3;
- (void)_parseFallbackResponse:(id)a0 fallbackURL:(id)a1 requestKey:(id)a2 enableExtraLogs:(char)a3 maxAge:(id)a4 etag:(id)a5 lastModifiedString:(id)a6 completion:(id /* block */)a7;
- (void)operationWillFinishWithError:(id)a0;
- (char)validateOperation;

@end
