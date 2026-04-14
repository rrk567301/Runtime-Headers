@class AMSUIWebFlowController, NSString, AMSMescalAccountPrimeSession, AMSUIWebPageViewController, AMSSnapshotBag, NSDictionary, AMSUIWebPluginLoader, ACAccount, AMSUIWebJSDataProvider, AMSMetrics, AMSURLSession, AMSProcessInfo;
@protocol AMSBagProtocol, AMSUIWebActionRunnerDelegate;

@interface AMSUIWebClientContext : NSObject

@property (retain) id<AMSBagProtocol> backingBag;
@property (readonly) ACAccount *account;
@property (weak) id<AMSUIWebActionRunnerDelegate> actionDelegate;
@property (retain) NSDictionary *additionalHeaders;
@property (readonly) AMSSnapshotBag *bag;
@property (readonly) AMSProcessInfo *clientInfo;
@property (retain) NSDictionary *clientOptions;
@property (retain) AMSUIWebJSDataProvider *dataProvider;
@property (readonly) BOOL disableTrustedDomains;
@property (retain) AMSUIWebFlowController *flowController;
@property BOOL loadUsingWebKit;
@property (retain) NSString *logKey;
@property (retain) AMSMetrics *metrics;
@property (retain) NSDictionary *metricsOverlay;
@property (retain) AMSMescalAccountPrimeSession *mescalSession;
@property (retain) AMSUIWebPluginLoader *pluginLoader;
@property BOOL signatureResumption;
@property (retain) AMSURLSession *URLSession;
@property (weak) AMSUIWebPageViewController *webPage;

+ (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1 domain:(struct __CFString { } *)a2;
+ (id)_createClientInfoFromAccount:(id)a0 clientInfo:(id)a1;

- (void).cxx_destruct;
- (id)JSAccountFromAccount:(id)a0 store:(id)a1;
- (id)iTunesAccountFromJSAccount:(id)a0;
- (void)replaceCurrentAccount:(id)a0 clientInfo:(id)a1;
- (id)iTunesAccountFromJSDSID:(id)a0;
- (void)updateBackingBag:(id)a0;
- (id)initWithAccount:(id)a0 clientInfo:(id)a1 backingBag:(id)a2;
- (id)loadSnapshot;

@end
