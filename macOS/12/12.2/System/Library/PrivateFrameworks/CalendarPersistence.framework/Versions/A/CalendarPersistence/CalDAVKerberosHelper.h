@interface CalDAVKerberosHelper : NSObject

+ (id)credentialForHost:(id)a0 user:(id)a1 password:(id)a2;
+ (void)credentialCacheDidChange:(id)a0;
+ (id)principalsForHost:(id)a0 user:(id)a1 password:(id)a2;

@end
