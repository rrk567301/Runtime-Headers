@interface PPPaths : NSObject

+ (id)topDirectory;
+ (id)logDirectory;
+ (id)subdirectory:(id)a0;
+ (id)filename:(id)a0 subdirectory:(id)a1;
+ (id)logSubdirectory:(id)a0;
+ (id)filename:(id)a0 logSubdirectory:(id)a1;
+ (id)resourcesDirectory;
+ (id)defaultAssetPathForNamespaceId:(unsigned int)a0 factorName:(id)a1;

@end
