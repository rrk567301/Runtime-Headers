@class NSArray;

@interface PGGraphMemoriesEnrichmentProcessorMemoryNodesToSort : NSObject

@property (retain, nonatomic) NSArray *memoryNodesWithoutLocalMemory;
@property (retain, nonatomic) NSArray *memoryNodesWithoutLocalMemoryLastEnrichmentDate;
@property (retain, nonatomic) NSArray *memoryNodesWithLocalMemoryLastEnrichmentDate;

- (void).cxx_destruct;
- (id)init;

@end
