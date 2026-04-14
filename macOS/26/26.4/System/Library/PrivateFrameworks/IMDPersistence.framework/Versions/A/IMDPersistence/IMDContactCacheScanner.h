@class NSArray, NSMutableDictionary, NSMutableArray;

@interface IMDContactCacheScanner : NSObject

@property (readonly, nonatomic) NSArray *requiredKeyDescriptors;
@property (retain, nonatomic) NSMutableDictionary *validCachedContacts;
@property (retain, nonatomic) NSMutableArray *fetchBuckets;
@property (readonly, nonatomic) BOOL requiresContactsFetch;
@property (nonatomic) BOOL omitPlaceholders;

- (void).cxx_destruct;
- (id)initWithRequiredKeyDescriptors:(id)a0;
- (id)addressBucketForAvailableKeyDescriptor:(id)a0;
- (void)contactWithAddress:(id)a0 needsFetchWithAvailableKeyDescriptor:(id)a1;
- (void)enumerateContactsAndKeysToFetchUsingBlock:(id /* block */)a0;
- (void)foundContact:(id)a0 forRequestedAddress:(id)a1;

@end
