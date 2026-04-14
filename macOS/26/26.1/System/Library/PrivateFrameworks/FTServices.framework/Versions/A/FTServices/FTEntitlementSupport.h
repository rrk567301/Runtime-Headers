@class NSDictionary;

@interface FTEntitlementSupport : NSObject

@property (readonly, nonatomic) BOOL faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (void)_entitlementStatusChanged;
- (BOOL)_registerForCTEntitlementNotifications;
- (BOOL)_setupCTServerConnection;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;
- (BOOL)_disconnectCTServerConnection;
- (BOOL)_reconnectCTServerConnectionIfNecessary;
- (id)_rawEntitlementValue;
- (void)_cleanupMachInfo;
- (id)init;

@end
