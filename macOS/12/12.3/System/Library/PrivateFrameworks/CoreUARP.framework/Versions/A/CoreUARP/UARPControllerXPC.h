@class NSXPCConnection, UARPController, NSError, NSObject;
@protocol OS_os_log;

@interface UARPControllerXPC : NSObject <UARPControllerInternalDelegate> {
    NSXPCConnection *_xpcConnection;
    NSError *_lastProviderError;
    id /* block */ _providerErrorReply;
    NSObject<OS_os_log> *_xpcLog;
    UARPController *_controller;
}

@property (readonly) NSXPCConnection *xpcConnection;
@property (readonly) BOOL useAssetAvailabilityNotifications;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)a0 assetID:(id)a1 params:(id)a2;
- (void)progressForUARPConsent:(id)a0 bytesSent:(unsigned long long)a1 bytesTotal:(unsigned long long)a2;
- (void)progressForUARPConsentInPostLogout:(id)a0 bytesSent:(unsigned long long)a1 bytesTotal:(unsigned long long)a2;
- (id)invocationForProviderSelector:(SEL)a0;
- (BOOL)performSynchronousProviderInvocation:(id)a0 accessory:(id)a1 requireKnown:(BOOL)a2 description:(const char *)a3;
- (BOOL)addAccessory:(id)a0 assetID:(id)a1;
- (BOOL)removeAccessory:(id)a0;
- (BOOL)changeAssetLocation:(id)a0 assetID:(id)a1;
- (BOOL)downloadAvailableFirmwareUpdate:(id)a0 assetID:(id)a1 withUserIntent:(BOOL)a2;
- (BOOL)downloadReleaseNotes:(id)a0 assetID:(id)a1;
- (void)sendFirmwareUpdateProgressForAccessory:(id)a0 assetID:(id)a1 bytesSent:(unsigned long long)a2 bytesTotal:(unsigned long long)a3;
- (BOOL)checkForUpdate:(id)a0;
- (BOOL)personalizationVectorForAccessory:(id)a0 assetTag:(unsigned int)a1 outVector:(unsigned int *)a2;
- (void)manifestPropertiesReceivedForAccessory:(id)a0 assetTag:(unsigned int)a1 properties:(id)a2;
- (BOOL)updateProperty:(unsigned long long)a0 value:(id)a1 forAccessory:(id)a2;
- (id)getAssetIDForAccessoryID:(id)a0;
- (id)getSupplementalAssetNameForAccessoryID:(id)a0;
- (id)getSupportedAccessories:(id)a0;
- (BOOL)getSupportedAccessories:(id)a0 assetID:(id)a1;
- (BOOL)requestConsent:(id)a0;
- (BOOL)revokeConsentRequest:(id)a0;
- (void)sendFirmwareUpdateProgressForUARPConsent:(id)a0 bytesSent:(unsigned long long)a1 bytesTotal:(unsigned long long)a2;

@end
