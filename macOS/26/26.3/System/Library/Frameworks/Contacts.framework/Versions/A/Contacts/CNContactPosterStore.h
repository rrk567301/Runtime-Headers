@protocol CNContactPosterDataStore;

@interface CNContactPosterStore : NSObject

@property (readonly, nonatomic) id<CNContactPosterDataStore> store;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)initWithContactPosterDataStoreManager:(id)a0;
- (id)initWithtPosterDataStore:(id)a0;
- (BOOL)performCreateRequest:(id)a0 error:(id *)a1;
- (BOOL)performDeleteRequest:(id)a0 error:(id *)a1;
- (id)performFetchRequest:(id)a0 error:(id *)a1;

@end
