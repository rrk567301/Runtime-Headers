@protocol CNContactPosterDataStore;

@interface CNContactPosterStore : NSObject

@property (readonly, nonatomic) id<CNContactPosterDataStore> store;

- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContactPosterDataStoreManager:(id)a0;
- (id)initWithtPosterDataStore:(id)a0;
- (BOOL)performCreateRequest:(id)a0 error:(id *)a1;
- (BOOL)performDeleteRequest:(id)a0 error:(id *)a1;
- (id)performFetchRequest:(id)a0 error:(id *)a1;

@end
