@class CNContactStore, NSArray, NSDictionary;

@interface GKContactDataSource : NSObject

@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSDictionary *contactLookup;

- (void).cxx_destruct;
- (id)keysToFetch;
- (id)init;
- (id)fetchContactWithID:(id)a0;
- (id)fullContactWithIdentifier:(id)a0;
- (void)loadContactsWithHandler:(id /* block */)a0;

@end
