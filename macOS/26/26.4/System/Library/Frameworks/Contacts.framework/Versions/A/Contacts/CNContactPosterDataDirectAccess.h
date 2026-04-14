@class NSString, CNContactPosterDataPersistentStoreManager;

@interface CNContactPosterDataDirectAccess : NSObject <CNContactPosterDataStore>

@property (readonly) CNContactPosterDataPersistentStoreManager *storeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)errorWithCode:(long long)a0;

- (void).cxx_destruct;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (id)init;
- (long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (BOOL)executeCreateRequest:(id)a0 error:(id *)a1;
- (BOOL)executeDeleteRequest:(id)a0 error:(id *)a1;
- (BOOL)executeUpdateRequest:(id)a0 error:(id *)a1;
- (id)initWithStoreManager:(id)a0;

@end
