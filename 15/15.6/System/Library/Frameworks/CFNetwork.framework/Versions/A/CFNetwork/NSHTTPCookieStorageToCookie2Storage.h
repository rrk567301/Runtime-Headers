@class NSHTTPCookie2Storage;

@interface NSHTTPCookieStorageToCookie2Storage : NSHTTPCookieStorage {
    unsigned long long _acceptPolicy;
    char _behavesLikeNS;
    NSHTTPCookie2Storage *_store;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_cookiesForURL:(id)a0 mainDocumentURL:(id)a1;
- (id)cookies;
- (struct OpaqueCFHTTPCookieStorage { } *)_cookieStorage;
- (void)_getCookiesForPartition:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getCookiesForURL:(id)a0 mainDocumentURL:(id)a1 partition:(id)a2 completionHandler:(id /* block */)a3;
- (void)_getCookiesForURL:(id)a0 mainDocumentURL:(id)a1 partition:(id)a2 policyProperties:(id)a3 completionHandler:(id /* block */)a4;
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage { } *)a0;
- (id)_initWithIdentifier:(id)a0 private:(BOOL)a1;
- (void)_saveCookies;
- (void)_saveCookies:(id /* block */)a0;
- (void)_setCookies:(id)a0 forURL:(id)a1 mainDocumentURL:(id)a2 policyProperties:(id)a3;
- (void)_setPrivateBrowsingEnabled:(char)a0;
- (void)_testingOfStoringOfCookie:(id)a0;
- (unsigned long long)cookieAcceptPolicy;
- (id)cookiesForURL:(id)a0;
- (void)deleteCookie:(id)a0;
- (void)getCookiesForTask:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeCookiesSinceDate:(id)a0;
- (void)setCookie:(id)a0;
- (void)setCookieAcceptPolicy:(unsigned long long)a0;
- (void)setCookies:(id)a0 forURL:(id)a1 mainDocumentURL:(id)a2;
- (void)storeCookies:(id)a0 forTask:(id)a1;

@end
