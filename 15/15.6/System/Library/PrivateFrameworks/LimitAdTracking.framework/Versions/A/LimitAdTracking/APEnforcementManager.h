@interface APEnforcementManager : NSObject

- (char)loggingEnabled;
- (id)disabledReasons;
- (char)adServicesEnabled:(id /* block */)a0;
- (char)shouldShowTCCWithAds;

@end
