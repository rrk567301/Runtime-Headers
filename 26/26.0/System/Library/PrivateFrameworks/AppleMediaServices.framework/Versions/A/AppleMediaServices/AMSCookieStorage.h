@interface AMSCookieStorage : NSObject

+ (id)updateCookiesWithCookiesToAdd:(id)a0 cookiesToRemove:(id)a1 forAccount:(id)a2;
+ (id)cookiesForAccount:(id)a0 error:(id *)a1;
+ (id)cookiesForAccount:(id)a0 cookieDatabaseOnly:(BOOL)a1 error:(id *)a2;
+ (BOOL)updateCookiesWithCookiesToAdd:(id)a0 cookiesToRemove:(id)a1 forAccount:(id)a2 error:(id *)a3;

@end
