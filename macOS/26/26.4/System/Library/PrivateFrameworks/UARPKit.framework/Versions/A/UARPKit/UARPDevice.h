@class NSXPCListener, NSUUID, NSXPCConnection, NSXPCInterface, NSString, NSObject, NSURL;
@protocol OS_os_log, UARPDeviceDelegateProtocol, OS_dispatch_queue;

@interface UARPDevice : NSObject {
    NSObject<OS_os_log> *_log;
    id<UARPDeviceDelegateProtocol> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSXPCListener *_xpcListener;
    NSXPCConnection *_xpcConnection;
    NSXPCInterface *_xpcInterface;
    BOOL _mustSuspend;
    BOOL _debugTransfer;
    BOOL _debugTransport;
    NSString *_firmwareVersion;
    NSString *_stagedFirmwareVersion;
    NSURL *_assetsCollectionURL;
}

@property (readonly) NSUUID *uuid;
@property BOOL supportsHeySiri;
@property BOOL supportsJustSiri;
@property BOOL supportsVoiceAssist;
@property BOOL supportsChargingChimeDebounce;

- (void)setAnonymousListener:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)activeFirmwareVersion;
- (id)stagedFirmwareVersion;
- (void)deviceAvailable;
- (void)releaseXPCConnection;
- (BOOL)isMatchingUUID:(id)a0;
- (BOOL)tapToRadarStop:(out id *)a0;
- (void)deviceAvailable:(long long)a0;
- (void)deviceReceiveUarpMessageFromTransport:(id)a0;
- (void)deviceSupportsChargingChimeDebounce;
- (void)deviceSupportsHeySiri;
- (void)deviceSupportsJustSiri;
- (void)deviceSupportsVoiceAssist;
- (void)deviceTransportAvailable;
- (void)deviceTransportAvailable:(long long)a0;
- (void)deviceTransportUnavailable;
- (void)deviceUnavailable;
- (BOOL)hostEndpointCopySourceURL:(id)a0 destinationURL:(id)a1;
- (void)hostEndpointDelegateAssetTransferProgress:(id)a0 assetUUID:(id)a1 bytesTransferred:(id)a2 totalBytes:(id)a3;
- (void)hostEndpointDelegateAssetTransferStatus:(id)a0 assetUUID:(id)a1 transferStatus:(id)a2;
- (void)hostEndpointDelegatePropertiesUpdated:(id)a0;
- (void)hostEndpointDelegateProvideSandBoxExtension:(id)a0 token:(id)a1 assetURL:(id)a2 appleModelNumber:(id)a3 serialNumber:(id)a4;
- (void)hostEndpointDelegateTransportNotNeeded:(id)a0;
- (void)hostEndpointDelegateTransportSetup:(id)a0;
- (void)hostEndpointDelegateTransportTeardown:(id)a0;
- (void)hostEndpointDelegateUARPMessageSend:(id)a0 uarpMessage:(id)a1;
- (void)hostEndpointDelegateUnresponsive:(id)a0;
- (id)initWithUUID:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)initWithUUID:(id)a0 delegate:(id)a1 delegateQueue:(id)a2 listener:(id)a3;
- (void)queryActiveFirmwareVersion;
- (void)queryStagedFirmwareVersion;
- (id)tapToRadarAssetsURL;
- (BOOL)tapToRadarClearBaseURL:(id)a0;
- (BOOL)tapToRadarStart:(out id *)a0;
- (BOOL)tapToRadarStart:(id)a0 error:(out id *)a1;

@end
