@interface PPPaths : NSObject

+ (id)defaultAssetPathForNamespaceId:(unsigned int)a0 factorName:(id)a1;
+ (id)topDirectory;
+ (id)resourcesDirectory;
+ (id)subdirectory:(id)a0;
+ (id)logDirectory;
+ (id)logSubdirectory:(id)a0;
+ (id)filename:(id)a0 subdirectory:(id)a1;
+ (id)filename:(id)a0 logSubdirectory:(id)a1;

@end
