@class PGGraphBuilder, NSString, NSMutableDictionary, PGMemoryController, NSDate, MABinaryAdjacency;

@interface PGGraphIngestMemoryProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
    PGMemoryController *_memoryController;
    NSMutableDictionary *_existingMemoryNodeByUniqueMemoryIdentifier;
    MABinaryAdjacency *_momentNodesByMemoryNodeAdjancy;
}

@property (copy, nonatomic) NSDate *localDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)regenerateMemoriesOfCategory:(unsigned long long)a0 withGraphBuilder:(id)a1 progressReporter:(id)a2;
+ (id)memoryCategoriesWithGraphUpdate:(id)a0;

- (void).cxx_destruct;
- (void)deleteWithMemoryCategories:(id)a0;
- (id)existingMemoryNodeByUniqueMemoryIdentifierWithGraph:(id)a0;
- (id)initWithGraphBuilder:(id)a0;
- (id)insertMemoriesForCategories:(id)a0 processingWindow:(id)a1 loggingConnection:(id)a2 progressBlock:(id /* block */)a3;
- (void)insertProcessorDependentMomentFeaturesForMomentNodes:(id)a0 featureProvider:(id)a1 progressBlock:(id /* block */)a2;
- (void)insertSingletonFeatureNodes;
- (id)memoryGeneratorsForMemoryCategory:(unsigned long long)a0 memoryGenerationContext:(id)a1 controller:(id)a2;
- (id)momentNodesByMemoryNodeAdjancyWithGraph:(id)a0;
- (void)resetMemoryNodesWithMemoryUniqueIdentifiers:(id)a0 loggingConnection:(id)a1;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
