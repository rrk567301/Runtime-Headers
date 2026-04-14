@class NSURLSession, NSString, NSDictionary, NSOperationQueue;

@interface ADServer : ADSingleton <NSURLSessionDelegate>

@property (class, readonly, nonatomic) NSOperationQueue *workQueue;

@property (retain) NSURLSession *session;
@property (retain) NSDictionary *configurations;
@property int configurationExpirationTime;
@property (retain) NSString *resourceConnectProxyURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)saveConfig;
- (id)serializeMessage:(id)a0;
- (BOOL)shouldRestoreConfiguration;
- (id)serverURLForMessageClass:(Class)a0 serverURL:(id)a1;
- (void)buildConfigurationDictionary:(id)a0;
- (void).cxx_destruct;
- (void)saveProxyURL;
- (void)handleRequest:(id)a0 serverURL:(id)a1 responseHandler:(id /* block */)a2;
- (void)restoreConfiguration;
- (id)deserializeMessage:(id)a0 error:(id *)a1;
- (id)init;

@end
