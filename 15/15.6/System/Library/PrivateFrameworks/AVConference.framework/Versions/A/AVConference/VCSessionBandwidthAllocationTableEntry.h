@class NSNumber, NSDictionary;
@protocol VCSessionUplinkBandwidthAllocatorClient, VCSessionDownlinkBandwidthAllocatorClient;

@interface VCSessionBandwidthAllocationTableEntry : NSObject {
    char _onDemand;
    NSDictionary *_upgradeQualityTiers;
}

@property (readonly) id<VCSessionDownlinkBandwidthAllocatorClient> client;
@property (readonly) unsigned int minNetworkBitrate;
@property (readonly) unsigned int maxNetworkBitrate;
@property (readonly) unsigned int maxMediaBitrate;
@property (readonly) unsigned int qualityIndex;
@property char isLowestQuality;
@property (readonly) unsigned char type;
@property (readonly) unsigned int streamID;
@property (readonly) unsigned int v2StreamID;
@property unsigned int actualNetworkBitrate;
@property (readonly) unsigned int repairStreamID;
@property (readonly) unsigned int repairMaxNetworkBitrate;
@property (readonly) char hasRepairStreamID;
@property (getter=isSubscribedTo) char subscribedTo;
@property (readonly, getter=isStartOnDemand) char startOnDemand;
@property (readonly) NSNumber *streamToken;
@property (readonly) unsigned int streamGroupID;
@property (readonly) unsigned int encoderGroupID;
@property (readonly) id<VCSessionUplinkBandwidthAllocatorClient> uplinkClient;

+ (long long)compareAudioEntry:(id)a0 audioEntry:(id)a1;
+ (long long)compareAudioEntry:(id)a0 videoEntry:(id)a1;
+ (long long)compareVideoEntry:(id)a0 videoEntry:(id)a1;
+ (unsigned char)entryTypeForMediaType:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (long long)compare:(id)a0;
- (id)initWithClient:(id)a0 type:(unsigned char)a1 streamToken:(long long)a2 minNetworkBitrate:(unsigned int)a3 maxNetworkBitrate:(unsigned int)a4 mediaBitrate:(unsigned int)a5 qualityIndex:(unsigned int)a6 streamID:(unsigned int)a7 hasRepairStreamID:(char)a8 repairStreamID:(unsigned int)a9 repairMaxNetworkBitrate:(unsigned int)a10 subscribedTo:(char)a11 startOnDemand:(char)a12 streamGroupID:(unsigned int)a13 encoderGroupID:(unsigned int)a14 v2StreamID:(unsigned int)a15;
- (id)initWithClient:(id)a0 type:(unsigned char)a1 streamToken:(long long)a2 networkBitrate:(unsigned int)a3 mediaBitrate:(unsigned int)a4 qualityIndex:(unsigned int)a5 streamID:(unsigned int)a6 streamGroupID:(unsigned int)a7 v2StreamID:(unsigned int)a8;
- (id)initWithClient:(id)a0 type:(unsigned char)a1 streamToken:(long long)a2 streamID:(unsigned int)a3 streamGroupID:(unsigned int)a4;

@end
