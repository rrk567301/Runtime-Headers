@class NSNumber, NSArray, NSString;
@protocol TKRegisteredTokenManaging;

@interface TKExtensionClientTokenSession : TKClientTokenSession {
    long long _connectionIdentifier;
    NSArray *_advertisedItems;
    NSString *_slotName;
    BOOL _authenticationContextWasProvidedByCaller;
    id<TKRegisteredTokenManaging> _tokenManager;
}

@property (readonly, nonatomic) NSNumber *sessionID;

- (void)terminate;
- (id)certificates;
- (BOOL)evaluateAccessControl:(id)a0 forOperation:(id)a1 error:(id *)a2;
- (id)advertisedItems;
- (void)_updatePINInitialStateWithContext:(id)a0 forToken:(id)a1;
- (void)_clearCredentialIfNeededForTokenID:(id)a0 inContext:(id)a1;
- (id)itemsOfClass:(id)a0;
- (void)setRegisteredTokenManager:(id)a0;
- (id)objectForObjectID:(id)a0 error:(id *)a1;
- (id)createObjectWithAttributes:(id)a0 error:(id *)a1;
- (id)keys;
- (BOOL)ensureSessionWithClient:(id)a0 connectionIdentifier:(long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)handleErrorForRegisteredSmartcards:(id)a0 forToken:(id)a1;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 tokenManager:(id)a3 error:(id *)a4;
- (id)identities;
- (void)setLastUsedRegisteredTokenID:(id)a0;
- (void)setWasPINCredentialProvidedByPINUI:(BOOL)a0;
- (BOOL)wasPINCredentialInitiallySet;
- (BOOL)wasPINCredentialProvidedByPINUI;
- (void)setWasPINCredentialInitiallySet:(BOOL)a0;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)slotName;
- (id)withError:(id *)a0 accessControl:(struct __SecAccessControl { } *)a1 invoke:(id /* block */)a2;
- (id)lastUsedRegisteredTokenID;
- (BOOL)isValidWithError:(id *)a0;
- (void)dealloc;

@end
