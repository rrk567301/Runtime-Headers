@interface EWSKerberos : NSObject

+ (id)credentialForHost:(id)a0 user:(id)a1;
+ (void)_credentialCacheDidChange:(id)a0;
+ (id)_principalsForHost:(id)a0 user:(id)a1;
+ (BOOL)hasCredentialForHost:(id)a0 user:(id)a1;

@end
