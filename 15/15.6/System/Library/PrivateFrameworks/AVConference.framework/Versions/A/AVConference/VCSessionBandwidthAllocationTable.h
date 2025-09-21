@class NSDictionary, NSMutableDictionary;

@interface VCSessionBandwidthAllocationTable : VCObject {
    unsigned char _type;
    NSMutableDictionary *_streamTokenEntries;
    NSMutableDictionary *_sortedEntriesForStreamToken;
    NSMutableDictionary *_streamIDToEntryTable;
    unsigned int _currentScreenEncoderGroupCount;
    unsigned int _maxActiveScreenEncoders;
    unsigned int _maxActiveCameraEncoders;
}

@property (readonly, nonatomic) NSDictionary *audioOnlyBitrateToStreamIDsTable;
@property (readonly, nonatomic) NSDictionary *audioVideoBitrateToStreamIDsTable;
@property (readonly, nonatomic) NSDictionary *videoOnlyBitrateToStreamIDsTable;
@property (readonly, nonatomic) NSDictionary *videoStreamIdToRepairStreamIdMap;

- (void)dealloc;
- (id)initWithType:(unsigned char)a0;
- (void)addBandwidthAllocationTableEntry:(id)a0;
- (void)appendEntry:(id)a0 streamTokenEntries:(id)a1 currentNetworkBitrate:(unsigned int *)a2 shouldUseRepairBitrate:(char)a3 appendedVideoEncoderGroups:(id)a4;
- (void)cleanupStreamTokenEntries:(id)a0 currentNetworkBitrate:(unsigned int *)a1 isRedundancyEnabled:(char)a2 appendedVideoEncoderGroups:(id)a3;
- (id)entryForStreamID:(id)a0;
- (id)newAggregatedBandwidthTableWithRedundancy:(char)a0 redundancyEnabledFor720Stream:(char)a1 enableMap:(id)a2 is1080pCameraAvailable:(char)a3;
- (void)printTable:(id)a0;
- (char)shouldAddBackupEntry:(id)a0 referenceTable:(id)a1 referenceQualityIndices:(id)a2;
- (char)shouldAppendEntry:(id)a0 appendedVideoEncoderGroups:(id)a1;
- (char)shouldAppendEntry:(id)a0 appendedVideoEncoderGroups:(id)a1 is1080pCameraAvailable:(char)a2;
- (char)shouldUseRepairBitrateForEntry:(id)a0 isRedundancyEnabled:(char)a1 isRedundancyEnabledFor720Stream:(char)a2;
- (id)tableEntriesForStreamToken:(long long)a0;

@end
