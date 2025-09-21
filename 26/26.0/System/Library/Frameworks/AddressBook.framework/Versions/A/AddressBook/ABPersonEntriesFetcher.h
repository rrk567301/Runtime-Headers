@class ABAccount, NSArray, NSString, NSPredicate, NSDictionary, NSMutableDictionary, ABAddressBook;

@interface ABPersonEntriesFetcher : NSObject {
    NSMutableDictionary *_entriesByUID;
}

@property (retain) ABAddressBook *addressBook;
@property (retain) ABAccount *account;
@property (copy) NSArray *affectedStores;
@property (copy) NSPredicate *fetchPredicate;
@property (copy) NSString *displayedProperty;
@property (copy) NSPredicate *displayedPropertyFilterPredicate;
@property BOOL includeGroups;
@property BOOL includeLinkedPeople;
@property BOOL unifyPeople;
@property (readonly, copy) NSDictionary *resultEntriesByUID;

- (id)init;
- (void).cxx_destruct;
- (void)fetchEntries;
- (id)entryFactoryWithProperty:(id)a0 propertyFilterPredicate:(id)a1 propertyType:(long long)a2;

@end
