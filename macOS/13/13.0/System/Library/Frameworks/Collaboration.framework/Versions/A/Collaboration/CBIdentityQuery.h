@class NSArray;

@interface CBIdentityQuery : NSObject {
    id _delegate;
    BOOL _showsHiddenIdentities;
    NSArray *_identities;
    struct __CSIdentityQuery { } *_csQuery;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)identities;
- (void)stop;
- (BOOL)execute;
- (void)setShowsHiddenIdentities:(BOOL)a0;
- (BOOL)showsHiddenIdentities;
- (id)initWithUserName:(id)a0 authority:(id)a1;
- (id)initWithGroupName:(id)a0 authority:(id)a1;
- (id)loginIdentities;
- (void)receiveEvent:(long long)a0 fromQuery:(struct __CSIdentityQuery { } *)a1 identities:(id)a2 error:(id)a3;
- (BOOL)executeAsynchronously;
- (struct __CSIdentityQuery { } *)CSIdentityQuery;

@end
