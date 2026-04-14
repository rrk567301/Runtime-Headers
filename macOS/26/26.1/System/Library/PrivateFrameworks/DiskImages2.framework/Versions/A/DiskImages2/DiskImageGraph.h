@class DiskImageGraphNode, NSMutableDictionary, NSMutableArray;

@interface DiskImageGraph : NSObject

@property (retain, nonatomic) NSMutableDictionary *graphDB;
@property (retain, nonatomic) NSMutableArray *imagesDictsArray;
@property (retain, nonatomic) NSMutableDictionary *nodes;
@property (retain, nonatomic) DiskImageGraphNode *activeNode;
@property (readonly, nonatomic) DiskImageGraphNode *rootNode;

+ (BOOL)copyDictNodesToFolder:(id)a0 dict:(id)a1 error:(id *)a2;
+ (id)createGraphDictWithNode:(id)a0;
+ (BOOL)createNodesConnectivityWithNodesDict:(id)a0 error:(id *)a1;
+ (BOOL)failWithNoPstackError:(id *)a0;
+ (id)getFirstNonCacheAncestorWithNode:(id)a0 error:(id *)a1;
+ (id)getImageInfoDictWithURL:(id)a0 error:(id *)a1;
+ (id)getImageUUIDStrWithIdentityInfo:(id)a0 stackableUUIDFallback:(BOOL)a1 error:(id *)a2;
+ (id)getImageUUIDWithURL:(id)a0 allowMissingUUID:(BOOL)a1 error:(id *)a2;
+ (BOOL)loadPlistDictFromFileHandle:(id)a0 dict:(id *)a1 error:(id *)a2;
+ (BOOL)populateNodesDictsWithArray:(id)a0 workDir:(id)a1 nodesDict:(id)a2 error:(id *)a3;
+ (BOOL)saveToPlistWithDictionary:(id)a0 URL:(id)a1 error:(id *)a2;
+ (BOOL)validateWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)appendOverlayWithURL:(id)a0 tag:(id)a1 error:(id *)a2;
- (id)initWithBaseImageURL:(id)a0 tag:(id)a1 error:(id *)a2;
- (BOOL)removeWithNode:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (id)URLRelativeToPstackParentWithURL:(id)a0;
- (id)activeInfoWithExtra:(BOOL)a0 error:(id *)a1;
- (BOOL)appendCacheWithURL:(id)a0 tag:(id)a1 error:(id *)a2;
- (BOOL)appendOverlayWithURL:(id)a0 tag:(id)a1 numBlocks:(unsigned long long)a2 error:(id *)a3;
- (BOOL)appendWithURL:(id)a0 isCache:(BOOL)a1 tag:(id)a2 numBlocks:(unsigned long long)a3 setNewActive:(BOOL)a4 error:(id *)a5;
- (BOOL)appendWithURL:(id)a0 isCache:(BOOL)a1 tag:(id)a2 numBlocks:(unsigned long long)a3 toNode:(id)a4 setNewActive:(BOOL)a5 error:(id *)a6;
- (BOOL)appendWithURL:(id)a0 tag:(id)a1 error:(id *)a2;
- (id)baseNode;
- (BOOL)checkStackValidityWithError:(id *)a0;
- (id)cloneToURL:(id)a0 error:(id *)a1;
- (id)getImageWithTag:(id)a0 error:(id *)a1;
- (id)getImageWithUUID:(id)a0 error:(id *)a1;
- (id)infoWithExtra:(BOOL)a0 error:(id *)a1;
- (id)initWithBaseImageURL:(id)a0 newPstackURL:(id)a1 tag:(id)a2 error:(id *)a3;
- (id)initWithGraphDB:(id)a0 error:(id *)a1;
- (id)initWithGraphDB:(id)a0 workDir:(id)a1 error:(id *)a2;
- (id)initWithPluginName:(id)a0 pluginParams:(id)a1 tag:(id)a2 error:(id *)a3;
- (id)initWithPstackURL:(id)a0 error:(id *)a1;
- (BOOL)removeNodeWithTag:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)removeNodeWithUUID:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)savePstackWithError:(id *)a0;
- (BOOL)savePstackWithURL:(id)a0 error:(id *)a1;
- (BOOL)setActiveNodeWithTag:(id)a0 error:(id *)a1;
- (BOOL)setActiveNodeWithUUID:(id)a0 error:(id *)a1;
- (BOOL)validateAppendedImageWithURL:(id)a0 parentNode:(id)a1 isCache:(BOOL)a2 error:(id *)a3;

@end
