@class NSDictionary;

@interface FTEntitlementSupport : NSObject

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (BOOL)_disconnectCTServerConnection;
- (void)_entitlementStatusChanged;
- (void)_cleanupMachInfo;
- (void)_unregisterForCTEntitlementNotifications;
- (id)init;
- (id)_rawEntitlementValue;
- (BOOL)_setupCTServerConnection;
- (BOOL)_registerForCTEntitlementNotifications;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;

@end
