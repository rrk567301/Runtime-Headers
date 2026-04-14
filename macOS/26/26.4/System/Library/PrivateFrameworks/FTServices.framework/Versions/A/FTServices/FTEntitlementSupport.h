@class NSDictionary;

@interface FTEntitlementSupport : NSObject

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (void)_unregisterForCTEntitlementNotifications;
- (BOOL)_registerForCTEntitlementNotifications;
- (void)_cleanupMachInfo;
- (id)_rawEntitlementValue;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (BOOL)_disconnectCTServerConnection;
- (BOOL)_setupCTServerConnection;
- (id)init;
- (void)_entitlementStatusChanged;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;

@end
