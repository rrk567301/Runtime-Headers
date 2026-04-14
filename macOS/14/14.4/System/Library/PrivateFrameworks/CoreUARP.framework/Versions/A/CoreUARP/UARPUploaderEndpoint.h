@class NSUUID, NSString, NSArray, UARPPacketDumper, NSSet, UARPAccessory, NSObject, UARPAssetVersion, NSMutableArray, NSMutableSet;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

@interface UARPUploaderEndpoint : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_layer2WatchdogTimer;
    struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int x0; unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; unsigned short x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; } x0; void *x1; unsigned short x2; unsigned char x3; int x4; unsigned char x5; unsigned short x6; unsigned short x7; struct UARPStatistics { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x8; struct UARP4ccTag *x9; struct uarpPlatformStreamingBuffer *x10; unsigned short x11; struct uarpPlatformTransmitBufferEntry **x12; unsigned short x13; struct uarpPlatformTransmitBufferEntry **x14; struct uarpPlatformTransmitBufferEntry *x15; unsigned short x16; struct uarpPlatformRemoteEndpoint *x17; } *_uarpEndpoint;
    struct uarpPlatformOptionsObj { unsigned int maxTxPayloadLength; unsigned int maxRxPayloadLength; unsigned int payloadWindowLength; unsigned short protocolVersion; unsigned char reofferFirmwareOnSync; unsigned short responseTimeout; unsigned short retryLimit; unsigned short maxTransmitsInFlight; int endpointType; unsigned short solicitationQueueDepth; unsigned short txBufferOverhead; } _uarpOptions;
    NSMutableArray *_txFirmwareAssets;
    NSMutableArray *_txDynamicAssets;
    NSMutableArray *_rxDynamicAssets;
    NSUUID *_uuid;
    BOOL _isDownstreamEndpoint;
    void *_layer2Context;
    NSMutableArray *_downstreamEndpoints;
    UARPUploaderEndpoint *_directEndpoint;
    UARPPacketDumper *_packetDumper;
    NSMutableSet *_infoPropertiesToQuery;
    NSMutableSet *_applePropertiesToQuery;
}

@property (readonly) UARPAccessory *accessory;
@property (readonly) struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int x0; unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; unsigned short x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; } x0; void *x1; unsigned short x2; unsigned char x3; int x4; unsigned char x5; unsigned short x6; unsigned short x7; struct UARPStatistics { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x8; struct UARP4ccTag *x9; struct uarpPlatformStreamingBuffer *x10; unsigned short x11; struct uarpPlatformTransmitBufferEntry **x12; unsigned short x13; struct uarpPlatformTransmitBufferEntry **x14; struct uarpPlatformTransmitBufferEntry *x15; unsigned short x16; struct uarpPlatformRemoteEndpoint *x17; } *uarpEndpoint;
@property (readonly) struct uarpPlatformOptionsObj { unsigned int x0; unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; unsigned short x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; } *uarpOptions;
@property (readonly) NSArray *txFirmwareAssets;
@property (readonly) NSArray *txDynamicAssets;
@property (readonly) NSArray *rxDynamicAssets;
@property unsigned long long uarpVersion;
@property (readonly) unsigned short downstreamID;
@property (readonly) UARPUploaderEndpoint *directEndpoint;
@property (readonly) NSSet *infoPropertiesToQuery;
@property (readonly) NSSet *applePropertiesToQuery;
@property (retain) NSString *manufacturerName;
@property (retain) NSString *modelName;
@property (retain) NSString *serialNumber;
@property (retain) NSString *friendlyName;
@property (retain) NSString *appleModelNumber;
@property (retain) NSString *hwFusingType;
@property (retain) NSString *hardwareVersion;
@property (retain) UARPAssetVersion *firmwareVersion;
@property (retain) UARPAssetVersion *stagedFirmwareVersion;

- (void)dealloc;
- (void).cxx_destruct;
- (id)findMatch:(id)a0;
- (void)removeAsset:(id)a0;
- (void)abandonRxDynamicAsset:(id)a0;
- (void)abandonTxDynamicAsset:(id)a0;
- (void)addDownstreamEndpoint:(id)a0;
- (void)addRxDynamicAsset:(id)a0;
- (void)addTxDynamicAsset:(id)a0;
- (void)addTxFirmwareAsset:(id)a0;
- (void)cancelLayer2WatchdogTimer;
- (void)cleanupAgedPacketCaptures:(id)a0;
- (void)clearQueuedAppleProperties;
- (void)clearQueuedInfoProperties;
- (id)downstreamEndpoint:(unsigned long long)a0;
- (void)dumpRxUARPMsg:(id)a0;
- (void)dumpTxUARPMsg:(id)a0;
- (void)handleLayer2WatchdogTimer:(id)a0;
- (BOOL)hasFullPersonality;
- (id)initDownstreamWithDirectEndpoint:(id)a0 layer2Context:(void *)a1;
- (id)initWithUARPAccessory:(id)a0;
- (id)initWithUARPAccessory:(id)a0 layer2Context:(struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int x0; unsigned int x1; unsigned int x2; unsigned short x3; unsigned char x4; unsigned short x5; unsigned short x6; unsigned short x7; int x8; unsigned short x9; unsigned short x10; } x0; void *x1; unsigned short x2; unsigned char x3; int x4; unsigned char x5; unsigned short x6; unsigned short x7; struct UARPStatistics { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x8; struct UARP4ccTag *x9; struct uarpPlatformStreamingBuffer *x10; unsigned short x11; struct uarpPlatformTransmitBufferEntry **x12; unsigned short x13; struct uarpPlatformTransmitBufferEntry **x14; struct uarpPlatformTransmitBufferEntry *x15; unsigned short x16; struct uarpPlatformRemoteEndpoint *x17; } *)a1;
- (BOOL)isDownstreamEndpoint;
- (void)qcancelLayer2WatchdogTimer;
- (void)queueAppleProperty:(unsigned int)a0;
- (void)queueInfoProperty:(unsigned int)a0;
- (void)removeDownstreamEndpoint:(id)a0;
- (void)setLayer2WatchdogTimer:(id)a0 timeoutMS:(unsigned long long)a1;
- (id)uniquePacketCaptureFilename;

@end
