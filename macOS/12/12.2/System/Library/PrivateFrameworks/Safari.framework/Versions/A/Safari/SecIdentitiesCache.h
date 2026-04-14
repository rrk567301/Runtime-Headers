@class NSMutableDictionary;

@interface SecIdentitiesCache : NSObject {
    NSMutableDictionary *_domainsToIdentities;
}

- (id)init;
- (void).cxx_destruct;
- (struct __SecIdentity { } *)secIdentityForURL:(id)a0;
- (void)setSecIdentity:(struct __SecIdentity { } *)a0 forURL:(id)a1;
- (id)_keyStringFromURL:(id)a0;

@end
