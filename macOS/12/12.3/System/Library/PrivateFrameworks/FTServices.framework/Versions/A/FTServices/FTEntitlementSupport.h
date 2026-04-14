@class NSDictionary;

@interface FTEntitlementSupport : NSObject

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (id)init;
- (BOOL)_setupCTServerConnection;
- (id)_rawEntitlementValue;
- (void)_entitlementStatusChanged;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;
- (BOOL)_registerForCTEntitlementNotifications;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_cleanupMachInfo;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (BOOL)_disconnectCTServerConnection;

@end
