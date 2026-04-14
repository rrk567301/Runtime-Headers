@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCSessionDownlinkBandwidthAllocator : NSObject {
    NSMutableDictionary *_allocatedMediaEntriesForClients;
    unsigned int _maxConcurrentVideoClients;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_clients;
    NSMutableDictionary *_selectedMediaEntriesForClients;
    NSMutableArray *_sortedMediaEntries;
    struct opaqueRTCReporting { } *_reportingAgent;
    unsigned int _maxOvershootCount;
}

@property (readonly, nonatomic) unsigned long long simultaneousTalkers;
@property (nonatomic) BOOL forceFullBandwidth;

+ (id)sortMediaEntriesGroupIds:(id)a0;

- (void)dealloc;
- (void)reset;
- (void)client:(id)a0 didActualNetworkBitrateChangeForStreamGroupID:(unsigned int)a1;
- (void)deregisterForBandwidthAllocationWithClient:(id)a0;
- (id)distributeBitrate:(unsigned int)a0;
- (id)initWithReportingAgent:(struct opaqueRTCReporting { } *)a0;
- (void)registerForBandwidthAllocationWithClient:(id)a0;
- (void)reportingSessionParticipantEventBitrateChanged:(id)a0 optedInNetworkBitrate:(unsigned int)a1 actualNetworkBitrate:(unsigned int)a2 optedInStreamID:(id)a3 actualStreamID:(id)a4;
- (unsigned int)requiredAudioBitrate:(unsigned int)a0 highestAudioBitrates:(id)a1;
- (BOOL)shouldOptInForVideoEntry:(id)a0 allocationContext:(struct tagVCSessionDownlinkBandwidthAllocationContext { int x0; unsigned int x1; id x2; id x3; } *)a1 skipEntry:(BOOL *)a2;
- (BOOL)shouldOptInWithOvershootForVideoEntry:(id)a0 allocationContext:(struct tagVCSessionDownlinkBandwidthAllocationContext { int x0; unsigned int x1; id x2; id x3; } *)a1 requiredBitrate:(unsigned int)a2 isCameraStream:(BOOL)a3 skipEntry:(BOOL *)a4;
- (void)sortMediaEntries;
- (void)updateHighestAudioBitrates:(id)a0 bitrate:(unsigned int)a1;
- (void)updateSelectedMediaEntriesForClientWithUUID:(id)a0;

@end
