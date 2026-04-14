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

- (id)init;
- (id)serverURLForMessageClass:(Class)a0 serverURL:(id)a1;
- (id)serializeMessage:(id)a0;
- (BOOL)shouldRestoreConfiguration;
- (void)handleRequest:(id)a0 serverURL:(id)a1 responseHandler:(id /* block */)a2;
- (void)saveProxyURL;
- (void)restoreConfiguration;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)buildConfigurationDictionary:(id)a0;
- (void).cxx_destruct;
- (id)deserializeMessage:(id)a0 error:(id *)a1;
- (void)saveConfig;

@end
