@class AMSURLSession, AMSUIWebPageViewController, AMSSnapshotBag, NSDictionary, ACAccount, AMSMescalAccountPrimeSession, AMSMetrics, AMSUIWebFlowController, AMSLRUCache, NSString, AMSUIWebPluginLoader, AMSUIWebJSDataProvider, AMSProcessInfo;
@protocol AMSBagProtocol, AMSUIWebActionRunnerDelegate;

@interface AMSUIWebClientContext : NSObject

@property (retain) id<AMSBagProtocol> backingBag;
@property (readonly) ACAccount *account;
@property (weak) id<AMSUIWebActionRunnerDelegate> actionDelegate;
@property (retain) NSDictionary *additionalHeaders;
@property (readonly) AMSSnapshotBag *bag;
@property char bootstrapComplete;
@property (readonly) AMSProcessInfo *clientInfo;
@property (retain) NSDictionary *clientOptions;
@property (retain) AMSUIWebJSDataProvider *dataProvider;
@property (readonly) char disableTrustedDomains;
@property (retain) AMSUIWebFlowController *flowController;
@property (retain) NSString *versionNumber;
@property char loadUsingWebKit;
@property (retain) NSString *logKey;
@property (retain) AMSMetrics *metrics;
@property (retain) NSDictionary *metricsOverlay;
@property (retain) NSDictionary *performanceMetricsOverlay;
@property (retain) AMSMescalAccountPrimeSession *mescalSession;
@property (retain) AMSUIWebPluginLoader *pluginLoader;
@property char reducedMemoryMode;
@property char signatureResumption;
@property (retain) AMSLRUCache *snapshotCache;
@property (retain) AMSURLSession *URLSession;
@property (weak) AMSUIWebPageViewController *webPage;
@property (weak) NSString *URL;

+ (char)_boolForKey:(id)a0 defaultValue:(char)a1 domain:(struct __CFString { } *)a2;
+ (id)_createClientInfoFromAccount:(id)a0 clientInfo:(id)a1;
+ (id)_sharedSnapshotCache;

- (void).cxx_destruct;
- (id)JSAccountFromAccount:(id)a0 store:(id)a1;
- (id)iTunesAccountFromJSAccount:(id)a0;
- (id)iTunesAccountFromJSDSID:(id)a0;
- (id)initWithAccount:(id)a0 clientInfo:(id)a1 backingBag:(id)a2;
- (id)loadSnapshot;
- (void)replaceCurrentAccount:(id)a0 clientInfo:(id)a1;
- (void)updateBackingBag:(id)a0;

@end
