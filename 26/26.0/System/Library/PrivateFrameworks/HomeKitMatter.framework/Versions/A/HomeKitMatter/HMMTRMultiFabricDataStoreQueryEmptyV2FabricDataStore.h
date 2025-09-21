@class NSArray;

@interface HMMTRMultiFabricDataStoreQueryEmptyV2FabricDataStore : NSObject <HMMTRMultiFabricDataStoreQueryV2FabricDataStoreDelegate>

@property (readonly, copy, nonatomic) NSArray *fabricDataItems;

- (id)fabricDataItems;

@end
