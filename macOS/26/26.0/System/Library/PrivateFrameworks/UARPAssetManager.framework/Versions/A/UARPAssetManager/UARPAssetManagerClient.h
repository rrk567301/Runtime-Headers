@class NSError, NSObject, NSXPCConnection;
@protocol OS_os_log;

@interface UARPAssetManagerClient : NSObject {
    NSXPCConnection *_xpcConnection;
    NSError *_lastProviderError;
    id /* block */ _providerErrorReply;
    NSObject<OS_os_log> *_xpcLog;
}

@property (readonly) NSXPCConnection *xpcConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)checkAssetAvailabilityForDomain:(id)a0;
- (void)clearAssetCacheForDomain:(id)a0;
- (id)getAssetURLForPersonality:(id)a0;
- (id)getSandboxExtensionTokenForAssetURL:(id)a0;
- (id)getSupplementalAssetURLForPersonality:(id)a0 supplementalAsset:(id)a1;
- (void)primeCache:(id)a0;
- (void)releaseXPCConnection;
- (void)subscribeForPersonality:(id)a0;
- (void)updateReachabilityForPersonality:(id)a0 reachable:(BOOL)a1;
- (void)updateSettingsForPersonality:(id)a0;

@end
