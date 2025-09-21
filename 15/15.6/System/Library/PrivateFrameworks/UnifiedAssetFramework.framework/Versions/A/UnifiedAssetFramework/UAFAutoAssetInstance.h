@interface UAFAutoAssetInstance : NSObject

+ (char)clear:(id)a0 path:(id)a1;
+ (char)decomposeSaveFileURL:(id)a0 assetSetName:(id *)a1 atomicInstance:(id *)a2;
+ (id)instanceDirURL;
+ (id)saveFileURL:(id)a0;

@end
