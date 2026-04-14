@class CNCache, ACAccountStore;

@interface CNManagedAccountsCache : NSObject

@property (retain, nonatomic) CNCache *accountsCache;
@property (retain, nonatomic) ACAccountStore *accountStore;

+ (id)sharedCache;

- (void)clearCache;
- (void).cxx_destruct;
- (id)accountForIdentifier:(id)a0;
- (id)init;
- (id)accountsForIdentifiers:(id)a0;

@end
