@interface ICCoreDataCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate

@property (nonatomic) char isCheckingObjectConsistency;
@property (readonly, nonatomic) char shouldPerformConsistencyCheck;
@property (nonatomic) unsigned long long indexingPriority;

- (void)dealloc;
- (id)bundleIdentifier;
- (id)attributeSetForObject:(id)a0;
- (id)indexName;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;
- (id)initForStoreWithDescription:(id)a0 coordinator:(id)a1 indexingPriority:(unsigned long long)a2;
- (char)shouldIndexableObjectExistInIndexing:(id)a0;

@end
