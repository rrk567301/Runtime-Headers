@class NSArray, NSString, NSPredicate, NSDictionary, NSMutableDictionary, ABAddressBook;

@interface ABPersonEntriesFetcher : NSObject {
    NSMutableDictionary *_entriesByUID;
}

@property (retain) ABAddressBook *addressBook;
@property (copy) NSArray *affectedStores;
@property (copy) NSPredicate *fetchPredicate;
@property (copy) NSString *displayedProperty;
@property (copy) NSPredicate *displayedPropertyFilterPredicate;
@property char includeGroups;
@property char includeLinkedPeople;
@property char unifyPeople;
@property (readonly, copy) NSDictionary *resultEntriesByUID;

- (id)init;
- (void).cxx_destruct;
- (void)fetchEntries;

@end
