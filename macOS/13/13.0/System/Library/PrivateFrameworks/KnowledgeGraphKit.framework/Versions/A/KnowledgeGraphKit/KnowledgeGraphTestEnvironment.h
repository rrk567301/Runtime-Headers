@class NSArray, KGStoredGraph;

@interface KnowledgeGraphTestEnvironment : NSObject

@property (class, readonly, copy, nonatomic) NSArray *testEnvironmentsForExistingStores;
@property (class, readonly, copy, nonatomic) NSArray *testEnvironmentsForOnDiskExistingStores;
@property (class, readonly, copy, nonatomic) NSArray *matisseGraphs;

@property (readonly, nonatomic) KGStoredGraph *graph;

+ (id)temporaryURLWithFileExtension:(id)a0;
+ (id)environmentWithTestDBWithStoreType:(Class)a0 extraOptions:(unsigned long long)a1;

- (void).cxx_destruct;
- (unsigned long long)edgeCount;
- (unsigned long long)nodeCount;
- (id)initWithKGGraph:(id)a0;
- (void)closeAndDeleteEnvironment;
- (id)placeholderNodeWithLabels:(id)a0 properties:(id)a1;
- (id)placeholderEdgeWithLabels:(id)a0 properties:(id)a1 sourceNode:(id)a2 targetNode:(id)a3;
- (id)addNodeWithLabels:(id)a0 properties:(id)a1;
- (id)addEdgeWithLabels:(id)a0 properties:(id)a1 sourceNode:(id)a2 targetNode:(id)a3;
- (id)refetchNode:(id)a0;
- (id)refetchEdge:(id)a0;
- (BOOL)deleteNode:(id)a0;
- (BOOL)deleteEdge:(id)a0;
- (void)populateGraph;

@end
