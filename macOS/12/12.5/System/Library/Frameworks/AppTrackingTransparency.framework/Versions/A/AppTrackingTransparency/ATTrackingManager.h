@interface ATTrackingManager : NSObject

@property (class, readonly, nonatomic) unsigned long long trackingAuthorizationStatus;

+ (BOOL)_userAllowedToChangeSettings;
+ (BOOL)_restrictionProfileInstalled;
+ (BOOL)_applicationHasDisqualifyingEntitlement;
+ (unsigned long long)_trackingAuthorizationStatus;
+ (void)_sendRequestTrackingAnalytic:(unsigned long long)a0 prompted:(BOOL)a1 deniedReason:(unsigned long long)a2;
+ (BOOL)_isCrossAppTrackingAllowed;
+ (void)_sendTrackingStatusAnalytic:(unsigned long long)a0 prompted:(BOOL)a1 deniedReason:(unsigned long long)a2;
+ (BOOL)applicationStateActive;
+ (BOOL)isApplicationExtension;
+ (void)requestTrackingAuthorizationWithCompletionHandler:(id /* block */)a0;

@end
