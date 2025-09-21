@interface VSUserAccountPersistentContainer : NSPersistentCloudKitContainer

+ (id)loadStoreURL;

- (id)initInMemory:(BOOL)a0;
- (void)configureDescriptonInMemory:(BOOL)a0;

@end
