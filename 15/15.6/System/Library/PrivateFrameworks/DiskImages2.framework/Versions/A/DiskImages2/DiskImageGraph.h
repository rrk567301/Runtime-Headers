@class NSMutableDictionary, NSURL, NSMutableArray, DiskImageGraphNode;

@interface DiskImageGraph : NSObject

@property (copy, nonatomic) NSURL *pstackURL;
@property (retain, nonatomic) NSMutableDictionary *pstackDB;
@property (retain, nonatomic) NSMutableArray *imagesDictsArray;
@property (retain, nonatomic) NSMutableDictionary *nodes;
@property (retain, nonatomic) DiskImageGraphNode *activeNode;
@property (nonatomic) char imported;

+ (char)copyDictNodesToFolder:(id)a0 dict:(id)a1 error:(id *)a2;
+ (char)createNodesConnectivityWithNodesDict:(id)a0 error:(id *)a1;
+ (id)createPstackDictWithNode:(id)a0;
+ (char)failWithNoPstackError:(id *)a0;
+ (id)getFirstNonCacheAncestorWithNode:(id)a0 error:(id *)a1;
+ (id)getImageInfoDictWithURL:(id)a0 error:(id *)a1;
+ (id)getImageUUIDStrWithIdentityInfo:(id)a0 stackableUUIDFallback:(char)a1 error:(id *)a2;
+ (id)getImageUUIDWithURL:(id)a0 allowMissingUUID:(char)a1 error:(id *)a2;
+ (id)getRelativeIfContainedWithChildURL:(id)a0 parentURL:(id)a1;
+ (char)loadPlistDictFromURL:(id)a0 dict:(id *)a1 error:(id *)a2;
+ (char)populateNodesDictsWithArray:(id)a0 pstackURL:(id)a1 nodesDict:(id)a2 isTopLevelPstack:(char)a3 error:(id *)a4;
+ (char)saveToPlistWithDictionary:(id)a0 URL:(id)a1 error:(id *)a2;
+ (char)validateWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (char)removeWithNode:(id)a0 recursive:(char)a1 error:(id *)a2;
- (id)activeInfoWithExtra:(char)a0 error:(id *)a1;
- (char)appendCacheWithURL:(id)a0 tag:(id)a1 error:(id *)a2;
- (char)appendWithURL:(id)a0 isCache:(char)a1 tag:(id)a2 numBlocks:(unsigned long long)a3 setNewActive:(char)a4 error:(id *)a5;
- (char)appendWithURL:(id)a0 isCache:(char)a1 tag:(id)a2 numBlocks:(unsigned long long)a3 toNode:(id)a4 setNewActive:(char)a5 error:(id *)a6;
- (char)appendWithURL:(id)a0 tag:(id)a1 error:(id *)a2;
- (char)appendWithURL:(id)a0 tag:(id)a1 numBlocks:(unsigned long long)a2 error:(id *)a3;
- (id)baseNode;
- (char)checkStackValidityWithError:(id *)a0;
- (char)cloneToURL:(id)a0 error:(id *)a1;
- (id)getImageWithTag:(id)a0 error:(id *)a1;
- (id)getImageWithUUID:(id)a0 error:(id *)a1;
- (id)infoWithExtra:(char)a0 error:(id *)a1;
- (id)initWithBaseImageURL:(id)a0 newPstackURL:(id)a1 tag:(id)a2 error:(id *)a3;
- (id)initWithData:(id)a0 pstackURL:(id)a1 imported:(char)a2 error:(id *)a3;
- (id)initWithPluginName:(id)a0 pluginParams:(id)a1 newPstackURL:(id)a2 tag:(id)a3 error:(id *)a4;
- (id)initWithPstackURL:(id)a0 error:(id *)a1;
- (id)initWithPstackURL:(id)a0 imported:(char)a1 error:(id *)a2;
- (char)loadImportedNodesWithError:(id *)a0;
- (char)removeNodeWithTag:(id)a0 recursive:(char)a1 error:(id *)a2;
- (char)removeNodeWithUUID:(id)a0 recursive:(char)a1 error:(id *)a2;
- (char)savePstackWithError:(id *)a0;
- (char)setActiveNodeWithTag:(id)a0 error:(id *)a1;
- (char)setActiveNodeWithUUID:(id)a0 error:(id *)a1;
- (char)validateAppendedImageWithURL:(id)a0 parentNode:(id)a1 isCache:(char)a2 error:(id *)a3;

@end
