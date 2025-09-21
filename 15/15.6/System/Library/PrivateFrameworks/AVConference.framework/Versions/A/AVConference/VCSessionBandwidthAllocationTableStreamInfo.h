@class NSMutableArray, NSMutableDictionary;

@interface VCSessionBandwidthAllocationTableStreamInfo : NSObject

@property (readonly, nonatomic) NSMutableArray *sortedEntries;
@property (readonly, nonatomic) NSMutableDictionary *qualityIndexToTableEntry;

- (void)dealloc;
- (id)init;
- (char)addTableEntry:(id)a0;
- (id)entryForQualityIndex:(unsigned int)a0;

@end
