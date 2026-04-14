@interface NSPersistentUIStore : NSObject

+ (id)defaultStoreWithBundleIdentifier:(id)a0;
+ (id)persistentStateDirectoryURLForBundleIdentifier:(id)a0 containerPath:(id)a1;
+ (id)remoteStore;

@end
