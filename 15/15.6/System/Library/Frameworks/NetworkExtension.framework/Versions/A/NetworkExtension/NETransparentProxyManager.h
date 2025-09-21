@interface NETransparentProxyManager : NEVPNManager

@property (readonly, nonatomic, getter=isFromMDM) char isFromMDM;

+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;
+ (void)loadEverythingFromPreferencesWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (void)additionalSetup;
- (char)isProtocolTypeValid:(long long)a0;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;

@end
