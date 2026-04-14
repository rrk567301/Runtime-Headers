@class NSMutableDictionary;

@interface WBSSecIdentitiesCache : NSObject {
    NSMutableDictionary *_domainsToIdentities;
}

- (void).cxx_destruct;
- (id)init;
- (void)removeAllObjects;
- (struct __SecIdentity { } *)secIdentityForDomain:(id)a0;
- (void)setSecIdentity:(struct __SecIdentity { } *)a0 forDomain:(id)a1;

@end
