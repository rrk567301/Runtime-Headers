@interface FCRecipeUserEventHistory : FCUserEventHistory

+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (id)recordZoneID;
+ (id)commandStoreFileName;
+ (id)storageDirectoryName;

@end
