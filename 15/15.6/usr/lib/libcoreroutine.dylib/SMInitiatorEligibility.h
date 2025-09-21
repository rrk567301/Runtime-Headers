@interface SMInitiatorEligibility : NSObject

+ (id)_getRegulatoryDomainCountryCodes;
+ (long long)cellularEligibilityFailureStatusForPlatform:(id)a0;
+ (char)checkAirplaneModeEnabledWithQueue:(id)a0;
+ (char)checkCellularDataEnabledWithQueue:(id)a0;
+ (void)checkCellularEnabledWithQueue:(id)a0 handler:(id /* block */)a1;
+ (char)checkCellularWatchToggleEnabledWithQueue:(id)a0;
+ (char)checkDevicePlatformEnabled;
+ (char)checkHasSimWithQueue:(id)a0;
+ (void)checkIMessageAccountEnabledWithQueue:(id)a0 handler:(id /* block */)a1;
+ (void)checkInitiatorEligibilityWithQueue:(id)a0 authorizationManager:(id)a1 effectivePairedDevice:(id)a2 isHandoff:(char)a3 defaultsManager:(id)a4 platform:(id)a5 appDeletionManager:(id)a6 handler:(id /* block */)a7;
+ (char)checkIsInternalInstall;
+ (void)checkLocationAuthorizationWithQueue:(id)a0 handler:(id /* block */)a1;
+ (char)checkLocationServicesEnabledWithAuthorizationManager:(id)a0;
+ (void)checkManateeEnabledWithQueue:(id)a0 handler:(id /* block */)a1;
+ (void)checkNetworkReachabilityWithQueue:(id)a0 handler:(id /* block */)a1;
+ (char)checkRegulatoryDomainPassedWithQueue:(id)a0;
+ (char)deviceHasBaseband;
+ (char)shouldSkipCellularEligibilityCheckWithEffectivePairedDevice:(id)a0 isHandoff:(char)a1 defaultsManager:(id)a2;

@end
