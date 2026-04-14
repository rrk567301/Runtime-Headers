@interface APLocalEnforcementManager : APEnforcementManager

- (id)appTrackingServiceProxy:(id)a0;
- (id)disabledReasons;
- (BOOL)loggingEnabled;
- (id)appTrackingXPCConnection:(id /* block */)a0 withInvalidation:(id /* block */)a1;
- (id)accountStorefront;
- (BOOL)adServicesEnabled:(id /* block */)a0;
- (BOOL)deviceRegionStorefrontEnabled;
- (BOOL)isU13MAIDEDU;
- (BOOL)shouldShowTCCWithAds;

@end
