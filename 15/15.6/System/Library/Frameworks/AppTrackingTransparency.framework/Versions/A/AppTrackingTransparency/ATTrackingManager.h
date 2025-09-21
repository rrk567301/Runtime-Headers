@interface ATTrackingManager : NSObject

@property (class, readonly, nonatomic) unsigned long long trackingAuthorizationStatus;

+ (char)_userAllowedToChangeSettings;
+ (id)_TCCServer;
+ (char)_applicationHasDisqualifyingEntitlement;
+ (char)_isCrossAppTrackingAllowed;
+ (void)_performTCCAccessRequest:(id /* block */)a0;
+ (unsigned long long)_performTCCPreflightRequest;
+ (char)_restrictionProfileInstalled;
+ (void)_sendRequestTrackingAnalytic:(unsigned long long)a0 prompted:(char)a1 deniedReason:(unsigned long long)a2;
+ (void)_sendTrackingStatusAnalytic:(unsigned long long)a0 prompted:(char)a1 deniedReason:(unsigned long long)a2;
+ (unsigned long long)_trackingAuthorizationStatus;
+ (char)applicationStateActive;
+ (char)isApplicationExtension;
+ (void)requestTrackingAuthorizationWithCompletionHandler:(id /* block */)a0;

@end
