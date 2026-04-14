@interface AMSCookieStorage : NSObject

@property (class, readonly) BOOL isFeatureEnabled;

+ (id)cookiesForAccount:(id)a0 error:(id *)a1;
+ (BOOL)updateCookiesWithCookiesToAdd:(id)a0 cookiesToRemove:(id)a1 forAccount:(id)a2 error:(id *)a3;

@end
