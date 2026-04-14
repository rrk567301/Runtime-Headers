@class NSString, NSMutableDictionary;

@interface UAFAutoAssetInstance : NSObject

@property (retain, nonatomic) NSMutableDictionary *assets;
@property (nonatomic) int lockFileFD;
@property (retain, nonatomic) NSString *assetSetName;
@property (retain, nonatomic) NSString *atomicInstance;

+ (id)setFileURL:(id)a0;
+ (id)instanceFileURL:(id)a0 atomicInstance:(id)a1;
+ (id)autoAssetEntryToAsset:(id)a0 withAssetName:(id)a1;
+ (BOOL)clear:(id)a0 path:(id)a1;
+ (BOOL)decomposeSaveFileURL:(id)a0 assetSetName:(id *)a1 atomicInstance:(id *)a2;
+ (id)instanceDirURL;
+ (id)loadInstanceWithAssetSetName:(id)a0;
+ (id)loadInstanceWithURL:(id)a0;
+ (BOOL)removeInstanceWithAssetSetName:(id)a0 atomicInstance:(id)a1;
+ (id)saveFileURL:(id)a0;
+ (void)validateAllInstances;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDictionary:(id)a0;
- (BOOL)unlock;
- (id)encodeToDictionary;
- (BOOL)setLatest:(id *)a0;
- (id)assetsFromSpecifiers:(id)a0;
- (id)initWithAssetSetName:(id)a0 atomicInstance:(id)a1 entries:(id)a2;
- (BOOL)lockForLoading;
- (BOOL)lockForRemoval;

@end
