@class NSArray;

@interface CBIdentityQuery : NSObject {
    id _delegate;
    char _showsHiddenIdentities;
    NSArray *_identities;
    struct __CSIdentityQuery { } *_csQuery;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)identities;
- (void)stop;
- (char)execute;
- (struct __CSIdentityQuery { } *)CSIdentityQuery;
- (id)loginIdentities;
- (char)executeAsynchronously;
- (id)initWithGroupName:(id)a0 authority:(id)a1;
- (id)initWithUserName:(id)a0 authority:(id)a1;
- (void)receiveEvent:(long long)a0 fromQuery:(struct __CSIdentityQuery { } *)a1 identities:(id)a2 error:(id)a3;
- (void)setShowsHiddenIdentities:(char)a0;
- (char)showsHiddenIdentities;

@end
