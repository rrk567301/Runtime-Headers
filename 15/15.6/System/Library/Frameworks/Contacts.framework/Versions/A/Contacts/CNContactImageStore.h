@class CNContactMetadataPersistentStoreManager;

@interface CNContactImageStore : NSObject

@property (retain, nonatomic) CNContactMetadataPersistentStoreManager *storeManager;

+ (long long)maximumContactImagesPerContact;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (void)ensureImageQuotasForImages:(id)a0 adddedImagesCount:(long long)a1 inContext:(id)a2;
- (id)initWithContactMetadataStoreManager:(id)a0;
- (void)insertContactImage:(id)a0 withContactIdentifier:(id)a1 inContext:(id)a2;
- (id)managedObjectsToContactImages:(id)a0;
- (id)performFetchRequest:(id)a0 error:(id *)a1;
- (char)performSaveRequest:(id)a0 error:(id *)a1;
- (char)updateExistingImages:(id)a0 withContactImage:(id)a1;
- (char)updateOrInsertNewContactImages:(id)a0 forContactIdentifier:(id)a1 inContext:(id)a2 error:(id *)a3;

@end
