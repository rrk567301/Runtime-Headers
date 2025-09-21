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

- (id)certificates;
- (void)terminate;
- (BOOL)isValidWithError:(id *)a0;
- (id)advertisedItems;
- (id)identities;
- (void)dealloc;
- (BOOL)evaluateAccessControl:(id)a0 forOperation:(id)a1 error:(id *)a2;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 tokenManager:(id)a3 error:(id *)a4;
- (void)_clearCredentialIfNeededForTokenID:(id)a0 inContext:(id)a1;
- (id)objectForObjectID:(id)a0 error:(id *)a1;
- (void)handleErrorForRegisteredSmartcards:(id)a0 forToken:(id)a1;
- (id)lastUsedRegisteredTokenID;
- (id)keys;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;
- (void)_updatePINInitialStateWithContext:(id)a0 forToken:(id)a1;
- (id)withError:(id *)a0 accessControl:(struct __SecAccessControl { } *)a1 invoke:(id /* block */)a2;
- (BOOL)wasPINCredentialInitiallySet;
- (void)setRegisteredTokenManager:(id)a0;
- (id)createObjectWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)wasPINCredentialProvidedByPINUI;
- (void)setLastUsedRegisteredTokenID:(id)a0;
- (void)setWasPINCredentialInitiallySet:(BOOL)a0;
- (void)setWasPINCredentialProvidedByPINUI:(BOOL)a0;
- (BOOL)ensureSessionWithClient:(id)a0 connectionIdentifier:(long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)itemsOfClass:(id)a0;
- (id)slotName;

@end
