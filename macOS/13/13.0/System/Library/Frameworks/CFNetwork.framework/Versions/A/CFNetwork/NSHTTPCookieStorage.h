@class NSArray, NSHTTPCookieStorageInternal;

@interface NSHTTPCookieStorage : NSObject {
    NSHTTPCookieStorageInternal *_internal;
}

@property (class, readonly) NSHTTPCookieStorage *sharedHTTPCookieStorage;

@property (nonatomic) BOOL _overrideSessionCookieAcceptPolicy;
@property (readonly, copy) NSArray *cookies;
@property unsigned long long cookieAcceptPolicy;

+ (void)_setSharedHTTPCookieStorage:(id)a0;
+ (id)sharedCookieStorageForGroupContainerIdentifier:(id)a0;
+ (id)_csff:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)_initWithIdentifier:(id)a0 private:(BOOL)a1;
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage { } *)a0;
- (struct OpaqueCFHTTPCookieStorage { } *)_cookieStorage;
- (void)setCookie:(id)a0;
- (void)setCookies:(id)a0 forURL:(id)a1 mainDocumentURL:(id)a2;
- (void)_setCookies:(id)a0 forURL:(id)a1 mainDocumentURL:(id)a2 policyProperties:(id)a3;
- (void)_testingOfStoringOfCookie:(id)a0;
- (void)storeCookies:(id)a0 forTask:(id)a1;
- (void)_saveCookies:(id /* block */)a0;
- (void)_saveCookies;
- (id)cookiesForURL:(id)a0;
- (void)getCookiesForTask:(id)a0 completionHandler:(id /* block */)a1;
- (id)_cookiesForURL:(id)a0 mainDocumentURL:(id)a1;
- (void)_getCookiesForURL:(id)a0 mainDocumentURL:(id)a1 partition:(id)a2 completionHandler:(id /* block */)a3;
- (void)_getCookiesForURL:(id)a0 mainDocumentURL:(id)a1 partition:(id)a2 policyProperties:(id)a3 completionHandler:(id /* block */)a4;
- (void)_getCookiesForPartition:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteCookie:(id)a0;
- (void)removeCookiesSinceDate:(id)a0;
- (void)_setPrivateBrowsingEnabled:(BOOL)a0;
- (void)_setSubscribedDomainsForCookieChanges:(id)a0;
- (void)_setCookiesChangedHandler:(id /* block */)a0 onQueue:(id)a1;
- (void)_setCookiesRemovedHandler:(id /* block */)a0 onQueue:(id)a1;
- (id)sortedCookiesUsingDescriptors:(id)a0;
- (void)_getCookieStoragePartitionsCompletionHandler:(id /* block */)a0;
- (id)_getCookiesForDomain:(id)a0;

@end
