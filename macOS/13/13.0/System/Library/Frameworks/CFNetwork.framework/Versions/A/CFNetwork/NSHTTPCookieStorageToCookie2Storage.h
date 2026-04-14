@class NSHTTPCookie2Storage;

@interface NSHTTPCookieStorageToCookie2Storage : NSHTTPCookieStorage {
    unsigned long long _acceptPolicy;
    BOOL _behavesLikeNS;
    NSHTTPCookie2Storage *_store;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
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
- (id)cookies;
- (id)cookiesForURL:(id)a0;
- (void)getCookiesForTask:(id)a0 completionHandler:(id /* block */)a1;
- (id)_cookiesForURL:(id)a0 mainDocumentURL:(id)a1;
- (void)_getCookiesForURL:(id)a0 mainDocumentURL:(id)a1 partition:(id)a2 completionHandler:(id /* block */)a3;
- (void)_getCookiesForURL:(id)a0 mainDocumentURL:(id)a1 partition:(id)a2 policyProperties:(id)a3 completionHandler:(id /* block */)a4;
- (void)_getCookiesForPartition:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteCookie:(id)a0;
- (void)removeCookiesSinceDate:(id)a0;
- (void)setCookieAcceptPolicy:(unsigned long long)a0;
- (unsigned long long)cookieAcceptPolicy;
- (void)_setPrivateBrowsingEnabled:(BOOL)a0;

@end
