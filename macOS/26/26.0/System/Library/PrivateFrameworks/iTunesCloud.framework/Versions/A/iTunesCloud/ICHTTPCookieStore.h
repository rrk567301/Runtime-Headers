@class NSObject;
@protocol OS_dispatch_queue;

@interface ICHTTPCookieStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) ICHTTPCookieStore *sharedCookieStore;

- (id)getCookiesForURL:(id)a0 userIdentifier:(id)a1;
- (void)dealloc;
- (id)getCookiesForURL:(id)a0;
- (id)_cookieDictionaryForURL:(id)a0 userIdentifier:(id)a1;
- (BOOL)_saveCookies:(id)a0 userIdentifier:(id)a1;
- (BOOL)saveCookies:(id)a0 forURL:(id)a1 userIdentifier:(id)a2;
- (id)_accountForUserIdentifier:(id)a0;
- (id)init;
- (BOOL)saveGlobalAccountCookies:(id)a0 forURL:(id)a1;
- (BOOL)removeCookiesWithProperties:(id)a0;
- (id)getCookiesForUserIdentifier:(id)a0;
- (id)getGlobalAccountCookiesForURL:(id)a0;
- (id)getCookiesHeadersForURL:(id)a0 userIdentifier:(id)a1;
- (BOOL)saveCookies:(id)a0 forURL:(id)a1;
- (id)getCookieWithName:(id)a0 userIdentifier:(id)a1;
- (void)removeAllCookies;
- (void).cxx_destruct;

@end
