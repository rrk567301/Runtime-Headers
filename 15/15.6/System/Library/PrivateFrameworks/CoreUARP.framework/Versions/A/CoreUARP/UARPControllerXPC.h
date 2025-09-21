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
@property (readonly) char useAssetAvailabilityNotifications;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (char)checkForUpdate:(id)a0;
- (char)requestConsent:(id)a0;
- (char)addAccessory:(id)a0 assetID:(id)a1;
- (char)changeAssetLocation:(id)a0 assetID:(id)a1;
- (char)disableTRMSystemAuthenticationForRegistryEntryID:(id)a0;
- (char)downloadAvailableFirmwareUpdate:(id)a0 assetID:(id)a1 withUserIntent:(char)a2;
- (char)downloadReleaseNotes:(id)a0 assetID:(id)a1;
- (char)enableTRMSystemAuthenticationForRegistryEntryID:(id)a0;
- (id)getAssetIDForAccessoryID:(id)a0;
- (id)getAttestationCertificates:(id)a0;
- (char)getAttestationCertificates:(id)a0 assetID:(id)a1;
- (id)getSandboxExtensionTokenForAssetID:(id)a0;
- (id)getSupplementalAssetNameForAccessoryID:(id)a0;
- (char)getSupportedAccessories:(id)a0 assetID:(id)a1 batchRequest:(char)a2;
- (char)getSupportedAccessories:(id)a0 forProductGroup:(id)a1;
- (id)invocationForProviderSelector:(SEL)a0;
- (void)manifestPropertiesReceivedForAccessory:(id)a0 assetTag:(unsigned int)a1 properties:(id)a2;
- (char)performSynchronousProviderInvocation:(id)a0 accessory:(id)a1 requireKnown:(char)a2 description:(const char *)a3;
- (char)personalizationVectorForAccessory:(id)a0 assetTag:(unsigned int)a1 outVector:(unsigned int *)a2;
- (void)progressForUARPConsent:(id)a0 bytesSent:(unsigned long long)a1 bytesTotal:(unsigned long long)a2;
- (void)progressForUARPConsentInPostLogout:(id)a0 bytesSent:(unsigned long long)a1 bytesTotal:(unsigned long long)a2;
- (char)removeAccessory:(id)a0;
- (char)revokeConsentRequest:(id)a0;
- (void)sendFirmwareUpdateProgressForAccessory:(id)a0 assetID:(id)a1 bytesSent:(unsigned long long)a2 bytesTotal:(unsigned long long)a3;
- (void)sendFirmwareUpdateProgressForUARPConsent:(id)a0 bytesSent:(unsigned long long)a1 bytesTotal:(unsigned long long)a2;
- (void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)a0 assetID:(id)a1 params:(id)a2;
- (void)stagingCompleteForAccessoryID:(id)a0 assetID:(id)a1 status:(unsigned long long)a2;
- (char)updateProperty:(unsigned long long)a0 value:(id)a1 forAccessory:(id)a2;

@end
