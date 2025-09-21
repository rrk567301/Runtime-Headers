@class NSObject;
@protocol OS_dispatch_queue;

@interface ICHTTPCookieStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) ICHTTPCookieStore *sharedCookieStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_accountForUserIdentifier:(id)a0;
- (id)_cookieDictionaryForURL:(id)a0 userIdentifier:(id)a1;
- (char)_saveCookies:(id)a0 userIdentifier:(id)a1;
- (id)getCookieWithName:(id)a0 userIdentifier:(id)a1;
- (id)getCookiesForURL:(id)a0;
- (id)getCookiesForURL:(id)a0 userIdentifier:(id)a1;
- (id)getCookiesForUserIdentifier:(id)a0;
- (id)getCookiesHeadersForURL:(id)a0 userIdentifier:(id)a1;
- (id)getGlobalAccountCookiesForURL:(id)a0;
- (void)removeAllCookies;
- (char)removeCookiesWithProperties:(id)a0;
- (char)saveCookies:(id)a0 forURL:(id)a1;
- (char)saveCookies:(id)a0 forURL:(id)a1 userIdentifier:(id)a2;
- (char)saveGlobalAccountCookies:(id)a0 forURL:(id)a1;

@end
