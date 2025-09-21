@interface APLocalEnforcementManager : APEnforcementManager

- (char)loggingEnabled;
- (id)disabledReasons;
- (id)accountStorefront;
- (char)adServicesEnabled:(id /* block */)a0;
- (id)appTrackingServiceProxy:(id)a0;
- (id)appTrackingXPCConnection:(id /* block */)a0 withInvalidation:(id /* block */)a1;
- (char)deviceRegionStorefrontEnabled;
- (char)isU13MAIDEDU;
- (char)shouldShowTCCWithAds;

@end
