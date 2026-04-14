@class NSDictionary;

@interface FTEntitlementSupport : NSObject

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (BOOL)_registerForCTEntitlementNotifications;
- (void)_unregisterForCTEntitlementNotifications;
- (id)init;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;
- (BOOL)_disconnectCTServerConnection;
- (void)_entitlementStatusChanged;
- (id)_rawEntitlementValue;
- (BOOL)_setupCTServerConnection;
- (void)_cleanupMachInfo;

@end
