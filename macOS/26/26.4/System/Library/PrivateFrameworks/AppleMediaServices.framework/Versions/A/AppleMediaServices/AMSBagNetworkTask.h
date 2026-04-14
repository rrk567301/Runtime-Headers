@class NSString, AMSMetricsLoadURLOverlay, AMSProcessInfo, AMSMetricsActivity;
@protocol AMSBagAccountProvider;

@interface AMSBagNetworkTask : AMSTask {
    AMSMetricsActivity *_activity;
}

@property (readonly, nonatomic) id<AMSBagAccountProvider> accountProvider;
@property (readonly, nonatomic) NSString *logKey;
@property (readonly, nonatomic) AMSMetricsLoadURLOverlay *loadURLOverlay;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;

+ (id)_defaultURLCookieNames;
+ (id)_URLCookieNamesForProfile:(id)a0;
+ (id)_requestIdentifierForQueryItems:(id)a0;
+ (id)_bagDataByApplyingOverridesToBagData:(id)a0;
+ (id)_cookiesForNames:(id)a0 clientInfo:(id)a1 account:(id)a2;
+ (id)_queryItemsForClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2 cookieNames:(id)a3 account:(id)a4 storefront:(id)a5;
+ (id)requestPartialIdentifierForClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2;
+ (id)_setStorefrontFromURLResponse:(id)a0 bagData:(id)a1;
+ (void)_setURLCookieNames:(id)a0 forProfile:(id)a1;
+ (id)_requestIdentifierForQueryItems:(id)a0 prefix:(id)a1;
+ (id)_queryItemsForClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2 cookieNames:(id)a3 accountProvider:(id)a4;
+ (BOOL)_shouldReloadDataForOriginalCookies:(id)a0 newCookies:(id)a1;
+ (id)_bagDataByApplyingOverridesToBagData:(id)a0 overrides:(id)a1 ignoredKeys:(id)a2 inserts:(id)a3;

- (id)initWithClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2 accountProvider:(id)a3 loadURLOverlay:(id)a4;
- (id)_performFetchWithAttemptedCount:(unsigned long long)a0 account:(id)a1 storefront:(id)a2;
- (BOOL)_shouldRetryForResult:(id)a0 cookieNames:(id)a1 urlCookies:(id)a2 responseStorefront:(id)a3;
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)a0;
- (id)activity;
- (void)setActivity:(id)a0;
- (id)performFetch;
- (void).cxx_destruct;
- (id)_createRequestWithQueryItems:(id)a0;

@end
