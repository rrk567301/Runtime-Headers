@class NSString, NSDictionary, VCSessionBandwidthAllocationTable, NSMutableDictionary;

@interface VCSessionUplinkBandwidthAllocatorMultiway : VCObject <VCSessionUplinkBandwidthAllocator> {
    VCSessionBandwidthAllocationTable *_table;
    NSDictionary *_currentTable;
    NSMutableDictionary *_streamTokenToEnableMap;
    char _redundancyEnabled;
    char _redundancyEnabledFor720Stream;
    char _camera1080pAvailable;
}

@property (nonatomic, getter=isRedundancyEnabled) char redundancyEnabled;
@property (nonatomic, getter=isRedundancyEnabledFor720Stream) char redundancyEnabledFor720Stream;
@property (nonatomic, getter=isCamera1080pAvailable) char camera1080pAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)_recomputeCurrentTable;
- (void)addBandwidthAllocationTableEntry:(id)a0 updateNow:(char)a1;
- (id)getBitrateToStreamTable;
- (char)isEnabledStreamToken:(long long)a0;
- (char)peerSubscription:(char)a0 streamID:(unsigned short)a1;
- (id)repairStreamIDsForStreamToken:(long long)a0;
- (id)streamIDsForStreamToken:(long long)a0;
- (id)streamIDsForStreamToken:(long long)a0 targetBitrate:(unsigned int)a1;
- (id)streamIDsForStreamToken:(long long)a0 targetBitrateCap:(unsigned int)a1;
- (void)streamToken:(long long)a0 enabled:(char)a1;
- (id)tableEntriesForStreamToken:(long long)a0 targetBitrate:(unsigned int)a1 remainingBitrate:(unsigned int *)a2 isLastEntryForStreamToken:(char *)a3;
- (id)targetBitratesForStreamToken:(long long)a0 targetNetworkBitrate:(unsigned int)a1 preferNetworkBitrates:(char)a2;

@end
