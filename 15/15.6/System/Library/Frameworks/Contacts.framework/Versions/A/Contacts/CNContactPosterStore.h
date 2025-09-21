@class CNContactMetadataPersistentStoreManager;

@interface CNContactPosterStore : NSObject

@property (retain, nonatomic) CNContactMetadataPersistentStoreManager *storeManager;

+ (long long)maximumContactPostersPerContact;

- (id)init;
- (void).cxx_destruct;
- (id)managedObjectsToContactPosters:(id)a0;
- (void)ensurePosterQuotasForPosters:(id)a0 addedPostersCount:(long long)a1 inContext:(id)a2;
- (id)initWithContactMetadataStoreManager:(id)a0;
- (void)insertContactPoster:(id)a0 withContactIdentifier:(id)a1 inContext:(id)a2;
- (id)performFetchRequest:(id)a0 error:(id *)a1;
- (char)performSaveRequest:(id)a0 error:(id *)a1;
- (char)updateExistingPosters:(id)a0 withContactPoster:(id)a1;
- (char)updateOrInsertNewContactPosters:(id)a0 forContactIdentifier:(id)a1 inContext:(id)a2 error:(id *)a3;

@end
