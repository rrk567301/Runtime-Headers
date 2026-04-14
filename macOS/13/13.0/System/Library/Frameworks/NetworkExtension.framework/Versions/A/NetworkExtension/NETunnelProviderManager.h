@class NSArray;

@interface NETunnelProviderManager : NEVPNManager

@property (readonly) long long routingMethod;
@property (copy) NSArray *safariDomains;
@property (copy) NSArray *mailDomains;
@property (copy) NSArray *calendarDomains;
@property (copy) NSArray *contactsDomains;
@property (copy) NSArray *appRules;
@property (copy) NSArray *excludedDomains;
@property (copy) NSArray *associatedDomains;

+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)a0;
+ (id)forPerAppVPN;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)isProtocolTypeValid:(long long)a0;
- (void)additionalSetup;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)a0;
- (id)initWithSessionType:(int)a0 tunnelType:(long long)a1;
- (id)copyAppRules;

@end
