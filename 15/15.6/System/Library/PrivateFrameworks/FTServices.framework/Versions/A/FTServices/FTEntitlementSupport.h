@class NSDictionary;

@interface FTEntitlementSupport : NSObject

@property (readonly, nonatomic) char faceTimeNonWiFiEntitled;
@property (readonly, nonatomic) NSDictionary *registrationState;

+ (id)sharedInstance;

- (id)init;
- (char)_setupCTServerConnection;
- (void)_cleanupMachInfo;
- (char)_disconnectCTServerConnection;
- (void)_entitlementStatusChanged;
- (id)_rawEntitlementValue;
- (char)_reconnectCTServerConnectionIfNecessary;
- (char)_registerForCTEntitlementNotifications;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary { } *)a0;

@end
