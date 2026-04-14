@class NSXPCListener, NSUUID, NSXPCConnection, NSXPCInterface, NSString, NSObject;
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
    NSString *_firmwareVersion;
    NSString *_stagedFirmwareVersion;
}

@property (readonly) NSUUID *uuid;
@property BOOL supportsHeySiri;
@property BOOL supportsJustSiri;
@property BOOL supportsVoiceAssist;
@property BOOL supportsChargingChimeDebounce;

- (void)dealloc;
- (void)setAnonymousListener:(id)a0;
- (id)description;
- (void)activate;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)activeFirmwareVersion;
- (id)stagedFirmwareVersion;
- (void)deviceAvailable;
- (void)releaseXPCConnection;
- (BOOL)isMatchingUUID:(id)a0;
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
- (void)hostEndpointDelegateAssetTransferProgress:(id)a0 assetUUID:(id)a1 bytesTransferred:(id)a2 totalBytes:(id)a3;
- (void)hostEndpointDelegateAssetTransferStatus:(id)a0 assetUUID:(id)a1 transferStatus:(id)a2;
- (void)hostEndpointDelegatePropertiesUpdated:(id)a0;
- (void)hostEndpointDelegateTransportNotNeeded:(id)a0;
- (void)hostEndpointDelegateTransportSetup:(id)a0;
- (void)hostEndpointDelegateTransportTeardown:(id)a0;
- (void)hostEndpointDelegateUARPMessageSend:(id)a0 uarpMessage:(id)a1;
- (void)hostEndpointDelegateUnresponsive:(id)a0;
- (id)initWithUUID:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)initWithUUID:(id)a0 delegate:(id)a1 delegateQueue:(id)a2 listener:(id)a3;
- (void)queryActiveFirmwareVersion;
- (void)queryStagedFirmwareVersion;

@end
