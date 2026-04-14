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
- (id)identities;
- (id)slotName;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;
- (BOOL)isValidWithError:(id *)a0;
- (id)createObjectWithAttributes:(id)a0 error:(id *)a1;
- (id)certificates;
- (id)objectForObjectID:(id)a0 error:(id *)a1;
- (BOOL)wasPINCredentialInitiallySet;
- (BOOL)evaluateAccessControl:(id)a0 forOperation:(id)a1 error:(id *)a2;
- (void)setRegisteredTokenManager:(id)a0;
- (id)keys;
- (void)handleErrorForRegisteredSmartcards:(id)a0 forToken:(id)a1;
- (id)itemsOfClass:(id)a0;
- (id)advertisedItems;
- (BOOL)wasPINCredentialProvidedByPINUI;
- (void)dealloc;
- (void)setLastUsedRegisteredTokenID:(id)a0;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 tokenManager:(id)a3 error:(id *)a4;
- (void)setWasPINCredentialInitiallySet:(BOOL)a0;
- (void).cxx_destruct;
- (void)setWasPINCredentialProvidedByPINUI:(BOOL)a0;
- (id)withError:(id *)a0 accessControl:(struct __SecAccessControl { } *)a1 invoke:(id /* block */)a2;
- (void)_updatePINInitialStateWithContext:(id)a0 forToken:(id)a1;
- (id)lastUsedRegisteredTokenID;
- (void)_clearCredentialIfNeededForTokenID:(id)a0 inContext:(id)a1;
- (BOOL)ensureSessionWithClient:(id)a0 connectionIdentifier:(long long)a1 error:(id *)a2;

@end
