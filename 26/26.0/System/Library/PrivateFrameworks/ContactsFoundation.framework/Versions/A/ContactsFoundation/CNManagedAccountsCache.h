@class CNCache, ACAccountStore;

@interface CNManagedAccountsCache : NSObject

@property (retain, nonatomic) CNCache *accountsCache;
@property (retain, nonatomic) ACAccountStore *accountStore;

+ (id)sharedCache;

- (id)accountForIdentifier:(id)a0;
- (void)clearCache;
- (id)init;
- (id)accountsForIdentifiers:(id)a0;
- (void).cxx_destruct;

@end
