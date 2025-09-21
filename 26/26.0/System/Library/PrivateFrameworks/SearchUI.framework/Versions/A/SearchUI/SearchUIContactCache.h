@class CNContactStore, TLKAsyncCache, NSString;

@interface SearchUIContactCache : TLKAsyncCache <SearchUIBatchedCachePrewarmer>

@property (class, readonly) SearchUIContactCache *sharedCache;

@property (retain) CNContactStore *contactStore;
@property (readonly) TLKAsyncCache *cacheToPrewarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeholderContact;

- (void)computeObjectsForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (id)itemsToBatchPreFetchForRowModel:(id)a0;
- (id)contactForIdentifier:(id)a0;
- (id)contactsForIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)fetchContactsForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)contactForContactViewController:(id)a0;
- (void)fetchContactForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchContactForPerson:(id)a0 completionHandler:(id /* block */)a1;

@end
