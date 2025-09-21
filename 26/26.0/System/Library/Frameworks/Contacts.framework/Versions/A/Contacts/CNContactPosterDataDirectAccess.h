@class NSString, CNContactPosterDataPersistentStoreManager;

@interface CNContactPosterDataDirectAccess : NSObject <CNContactPosterDataStore>

@property (readonly) CNContactPosterDataPersistentStoreManager *storeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)init;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)executeCreateRequest:(id)a0 error:(id *)a1;
- (BOOL)executeDeleteRequest:(id)a0 error:(id *)a1;
- (BOOL)executeUpdateRequest:(id)a0 error:(id *)a1;
- (id)initWithStoreManager:(id)a0;

@end
