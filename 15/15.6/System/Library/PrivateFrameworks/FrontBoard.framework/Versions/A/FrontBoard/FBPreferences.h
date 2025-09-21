@interface FBPreferences : BSAbstractDefaultDomain

@property (readonly, nonatomic) char disableXPCServicesEndpointHack;

+ (id)sharedInstance;

- (id)_init;
- (void)_bindAndRegisterDefaults;

@end
