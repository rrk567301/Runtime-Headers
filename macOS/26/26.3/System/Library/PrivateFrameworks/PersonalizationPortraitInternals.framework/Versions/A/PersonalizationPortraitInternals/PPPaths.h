@interface PPPaths : NSObject

+ (id)logDirectory;
+ (id)defaultAssetPathForNamespaceId:(unsigned int)a0 factorName:(id)a1;
+ (id)filename:(id)a0 subdirectory:(id)a1;
+ (id)logSubdirectory:(id)a0;
+ (id)subdirectory:(id)a0;
+ (id)resourcesDirectory;
+ (id)filename:(id)a0 logSubdirectory:(id)a1;
+ (id)topDirectory;

@end
