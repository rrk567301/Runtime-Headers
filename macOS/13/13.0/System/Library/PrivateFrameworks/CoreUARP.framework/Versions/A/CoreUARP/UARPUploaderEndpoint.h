@class UARPAccessory, NSArray, NSObject, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

@interface UARPUploaderEndpoint : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_txWatchdogTimer;
    NSObject<OS_dispatch_source> *_txWatchdogInfoTimer;
    NSObject<OS_dispatch_source> *_transportActiveTimer;
    struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int maxTxPayloadLength; unsigned int maxRxPayloadLength; unsigned int payloadWindowLength; unsigned short protocolVersion; unsigned char reofferFirmwareOnSync; } _options; void *pDelegate; unsigned short selectedProtocolVersion; unsigned char isWatchdogSet; int _remoteEndpointID; unsigned char dataTransferAllowed; unsigned short txMsgID; unsigned short lastRxMsgID; struct UARPStatistics { unsigned int packetsNoVersionAgreement; unsigned int packetsMissed; unsigned int packetsDuplicate; unsigned int packetsOutOfOrder; } uarpStats; struct uarpPlatformRemoteEndpoint *pNext; } _uarpEndpoint;
    struct uarpPlatformOptionsObj { unsigned int maxTxPayloadLength; unsigned int maxRxPayloadLength; unsigned int payloadWindowLength; unsigned short protocolVersion; unsigned char reofferFirmwareOnSync; } _uarpOptions;
    NSMutableArray *_txAssets;
    NSMutableArray *_rxAssets;
    NSMutableArray *_infoQuery;
}

@property (readonly) UARPAccessory *accessory;
@property (readonly) struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int x0; unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; } x0; void *x1; unsigned short x2; unsigned char x3; int x4; unsigned char x5; unsigned short x6; unsigned short x7; struct UARPStatistics { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x8; struct uarpPlatformRemoteEndpoint *x9; } *uarpEndpoint;
@property (readonly) struct uarpPlatformOptionsObj { unsigned int x0; unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; } *uarpOptions;
@property (readonly) NSArray *txAssets;
@property (readonly) NSArray *rxAssets;
@property unsigned long long uarpVersion;
@property unsigned long long queriedProperty;

- (void)dealloc;
- (void).cxx_destruct;
- (id)findMatch:(id)a0;
- (id)initWithUARPAccessory:(id)a0;
- (void)addTxAsset:(id)a0;
- (void)rmvTxAsset:(id)a0;
- (void)addRxAsset:(id)a0;
- (void)rmvRxAsset:(id)a0;
- (void)queueQueryInfoProperty:(unsigned long long)a0;
- (BOOL)firstQueryInfoProperty:(unsigned long long *)a0;
- (void)handleTxWatchdogTimer:(id)a0;
- (void)cancelTxWatchdogTimer;
- (void)qCancelTxWatchdogTimer;
- (void)setTxWatchdogTimer:(id)a0 timeoutMS:(unsigned long long)a1;
- (void)handleTxWatchdogInfoTimer:(id)a0;
- (void)cancelTxWatchdogInfoTimer;
- (void)qCancelTxWatchdogInfoTimer;
- (void)setTxWatchdogInfoTimer:(id)a0 timeoutMS:(unsigned long long)a1;
- (void)handleActiveTransportWatchdogTimer:(id)a0;
- (void)cancelActiveTransportWatchdogTimer;
- (void)qCancelActiveTransportWatchdogTimer;
- (void)setActiveTransportWatchdogTimer:(id)a0 timeoutMS:(unsigned long long)a1;

@end
