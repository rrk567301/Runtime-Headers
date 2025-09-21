@class NSString, PGGraphMomentNodeCollection, PGGraphFeatureNodeCollection;

@interface PGGraphMemory : NSObject <PGMemoryNodeProtocol>

@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) NSString *uniqueMemoryIdentifier;
@property (readonly, nonatomic) unsigned long long memoryCategory;
@property (readonly, nonatomic) unsigned long long memoryCategorySubcategory;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (readonly, nonatomic) char generatedWithFallbackRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMemoryCategory:(unsigned long long)a0 memoryCategorySubcategory:(unsigned long long)a1 momentNodes:(id)a2 featureNodes:(id)a3;
- (id)initWithMemoryCategory:(unsigned long long)a0 memoryCategorySubcategory:(unsigned long long)a1 momentNodes:(id)a2 featureNodes:(id)a3 generatedWithFallbackRequirements:(char)a4;
- (id)memoryFeatureNodesInGraph:(id)a0;

@end
