@class AVBVirtualStreamConnection, NSObject, AVBMACAddress, AVBMSRPTalkerAttribute, NSMutableArray, AVBVirtualEntity;
@protocol OS_dispatch_semaphore;

@interface AVBVirtualStream : NSObject {
    NSObject<OS_dispatch_semaphore> *_talkerSync;
}

@property (nonatomic) BOOL maxTransitTimeIsDefault;
@property (weak, nonatomic) AVBVirtualEntity *virtualEntity;
@property (nonatomic) unsigned long long streamID;
@property (copy) AVBMACAddress *destinationMAC;
@property (nonatomic) unsigned short acmpFlags;
@property (nonatomic) unsigned short vlanID;
@property (retain) NSMutableArray *listeners;
@property (retain) AVBVirtualStreamConnection *talker;
@property (weak, nonatomic) NSObject<OS_dispatch_semaphore> *talkerSync;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL streamingWait;
@property (nonatomic) BOOL listenerReady;
@property (copy) AVBMSRPTalkerAttribute *receivedTalkerAttribute;
@property (readonly, nonatomic) unsigned short uniqueID;
@property (readonly, nonatomic) unsigned short maximumFrameSize;
@property (readonly, nonatomic) unsigned short maximumIntervalFrames;
@property (readonly, nonatomic) unsigned int accumulatedLatency;
@property (readonly, nonatomic) unsigned long long maximumBandwidth;
@property (nonatomic) unsigned long long maxTransitTime;

- (void).cxx_destruct;
- (id)initWithUniqueID:(unsigned short)a0;
- (void)startStream;
- (void)stopStream;
- (void)calculateBandwidth;
- (id)debugInfoDictionary;
- (BOOL)deregisterMSRPListener;
- (BOOL)deregisterMSRPTalker;
- (BOOL)registerMSRPListener;
- (BOOL)registerMSRPTalker;
- (BOOL)setStreamFormat:(id)a0;
- (void)setTalkerSync:(id)a0;
- (id)talkerSync;

@end
