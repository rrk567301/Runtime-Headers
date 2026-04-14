@class NSNumber, NSArray;

@interface TKExtensionClientTokenSession : TKClientTokenSession {
    long long _connectionIdentifier;
    NSArray *_advertisedItems;
}

@property (readonly, nonatomic) NSNumber *sessionID;

- (void)dealloc;
- (void).cxx_destruct;
- (id)keys;
- (id)identities;
- (void)terminate;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)certificates;
- (id)objectForObjectID:(id)a0 error:(id *)a1;
- (id)createObjectWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)isValidWithError:(id *)a0;
- (BOOL)evaluateAccessControl:(id)a0 forOperation:(id)a1 error:(id *)a2;
- (BOOL)ensureSessionWithClient:(id)a0 connectionIdentifier:(long long)a1 error:(id *)a2;
- (id)withError:(id *)a0 accessControl:(struct __SecAccessControl { } *)a1 invoke:(id /* block */)a2;
- (id)advertisedItems;
- (id)itemsOfClass:(id)a0;

@end
