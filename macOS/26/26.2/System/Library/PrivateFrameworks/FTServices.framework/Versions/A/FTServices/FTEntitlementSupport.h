@class NSDictionary;

@interface FTEntitlementSupport : NSObject

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (void)_entitlementStatusChanged;
- (void)_unregisterForCTEntitlementNotifications;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (BOOL)_setupCTServerConnection;
- (void)_cleanupMachInfo;
- (id)_rawEntitlementValue;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;
- (BOOL)_disconnectCTServerConnection;
- (id)init;
- (BOOL)_registerForCTEntitlementNotifications;

@end
