@interface ICHTTPCookieStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) ICHTTPCookieStore *sharedCookieStore;

- (id)getGlobalAccountCookiesForURL:(id)a0;
- (void)removeAllCookies;
- (id)getCookiesHeadersForURL:(id)a0 userIdentifier:(id)a1;
- (id)getCookiesForURL:(id)a0;
- (BOOL)saveGlobalAccountCookies:(id)a0 forURL:(id)a1;
- (BOOL)removeCookiesWithProperties:(id)a0;
- (id)getCookiesForUserIdentifier:(id)a0;
- (BOOL)saveCookies:(id)a0 forURL:(id)a1 userIdentifier:(id)a2;
- (id)getCookiesForURL:(id)a0 userIdentifier:(id)a1;
- (id)init;
- (id)_accountForUserIdentifier:(id)a0;
- (id)_cookieDictionaryForURL:(id)a0 userIdentifier:(id)a1;
- (BOOL)saveCookies:(id)a0 forURL:(id)a1;
- (id)getCookieWithName:(id)a0 userIdentifier:(id)a1;
- (void)dealloc;
- (BOOL)_saveCookies:(id)a0 userIdentifier:(id)a1;

@end
