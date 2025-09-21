@interface VSUserAccountPersistentContainer : NSPersistentCloudKitContainer

+ (id)loadStoreURL;

- (void)configureDescriptonInMemory:(char)a0;
- (id)initInMemory:(char)a0;

@end
