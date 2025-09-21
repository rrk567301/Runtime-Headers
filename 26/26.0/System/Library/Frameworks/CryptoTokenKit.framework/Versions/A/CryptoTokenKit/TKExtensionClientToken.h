@class TKCTKDConnection, NSXPCConnection;

@interface TKExtensionClientToken : TKClientToken {
    long long _connectionIdentifier;
    TKCTKDConnection *_serverConnection;
}

@property (readonly, nonatomic) NSXPCConnection *tokenConnection;

+ (id)builtinTokenIDs;

- (void)notifyOperation:(long long)a0 forToken:(id)a1 withStatus:(long long)a2;
- (void)dealloc;
- (id)initWithTokenID:(id)a0 ctkdConnection:(id)a1;
- (void)invalidate;
- (BOOL)ensureConnectionCanRequireCardInsertion:(BOOL)a0 error:(id *)a1;
- (id)withError:(id *)a0 invoke:(id /* block */)a1;
- (id)initWithTokenID:(id)a0;
- (id)ctkdConnection;
- (void).cxx_destruct;

@end
