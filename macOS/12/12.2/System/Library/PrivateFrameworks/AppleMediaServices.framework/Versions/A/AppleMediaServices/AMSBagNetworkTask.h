@class NSString, AMSURLSession, AMSProcessInfo;

@interface AMSBagNetworkTask : AMSTask <NSURLSessionTaskDelegate, AMSURLProtocolDelegate>

@property (retain) AMSURLSession *URLSession;
@property (retain) NSString *logKey;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bagStorefrontForAccountMediaType:(id)a0;
+ (id)bagAccountForAccountMediaType:(id)a0;
+ (id)_URLCookieNamesForProfile:(id)a0;
+ (void)_setURLCookieNames:(id)a0 forProfile:(id)a1;
+ (id)_setStorefrontFromURLResponse:(id)a0 bagData:(id)a1;
+ (id)_deviceString;
+ (id)_OSBuildTypeString;
+ (BOOL)_shouldReloadDataForOriginalCookies:(id)a0 newCookies:(id)a1;
+ (id)_defaultURLCookieNames;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)performFetch;
- (id)initWithClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2;
- (id)_createRequestWithCookieNames:(id)a0 storefront:(id)a1;
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)a0;
- (BOOL)_shouldRetryForResult:(id)a0 cookieNames:(id)a1 urlCookies:(id)a2 newStorefront:(id)a3;
- (id)_cookiesForNames:(id)a0;

@end
