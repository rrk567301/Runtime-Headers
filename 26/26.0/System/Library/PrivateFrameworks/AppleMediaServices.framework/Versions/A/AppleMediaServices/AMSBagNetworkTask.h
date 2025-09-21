@class NSString, AMSMetricsActivity, AMSProcessInfo;
@protocol AMSBagAccountProvider;

@interface AMSBagNetworkTask : AMSTask {
    AMSMetricsActivity *_activity;
}

@property (readonly, nonatomic) id<AMSBagAccountProvider> accountProvider;
@property (readonly, nonatomic) NSString *logKey;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;

+ (id)_setStorefrontFromURLResponse:(id)a0 bagData:(id)a1;
+ (id)_defaultURLCookieNames;
+ (id)_createURLSessionPromise;
+ (id)_requestIdentifierForQueryItems:(id)a0;
+ (id)_urlSessionPromise;
+ (void)_setURLCookieNames:(id)a0 forProfile:(id)a1;
+ (id)_bagDataByApplyingOverridesToBagData:(id)a0 overrides:(id)a1 ignoredKeys:(id)a2 inserts:(id)a3;
+ (id)_cookiesForNames:(id)a0 clientInfo:(id)a1 account:(id)a2;
+ (BOOL)_shouldReloadDataForOriginalCookies:(id)a0 newCookies:(id)a1;
+ (id)_queryItemsForClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2 cookieNames:(id)a3 account:(id)a4 storefront:(id)a5;
+ (id)_requestIdentifierForQueryItems:(id)a0 prefix:(id)a1;
+ (id)requestPartialIdentifierForClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2;
+ (id)_URLCookieNamesForProfile:(id)a0;
+ (id)_bagDataByApplyingOverridesToBagData:(id)a0;
+ (id)_queryItemsForClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2 cookieNames:(id)a3 accountProvider:(id)a4;

- (BOOL)_shouldRetryForResult:(id)a0 cookieNames:(id)a1 urlCookies:(id)a2 responseStorefront:(id)a3;
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)a0;
- (void)setActivity:(id)a0;
- (id)performFetch;
- (id)activity;
- (id)_createRequestWithQueryItems:(id)a0;
- (id)initWithClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2 accountProvider:(id)a3;
- (id)_performFetchWithAttemptedCount:(unsigned long long)a0 account:(id)a1 storefront:(id)a2;
- (void).cxx_destruct;

@end
