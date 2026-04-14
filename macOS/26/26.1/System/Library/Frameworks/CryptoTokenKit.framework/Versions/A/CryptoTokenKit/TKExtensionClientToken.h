@class TKCTKDConnection, NSXPCConnection;

@interface TKExtensionClientToken : TKClientToken {
    long long _connectionIdentifier;
    TKCTKDConnection *_serverConnection;
}

@property (readonly, nonatomic) NSXPCConnection *tokenConnection;

+ (id)builtinTokenIDs;

- (id)initWithTokenID:(id)a0;
- (id)withError:(id *)a0 invoke:(id /* block */)a1;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)ctkdConnection;
- (BOOL)ensureConnectionCanRequireCardInsertion:(BOOL)a0 error:(id *)a1;
- (void)notifyOperation:(long long)a0 forToken:(id)a1 withStatus:(long long)a2;
- (id)initWithTokenID:(id)a0 ctkdConnection:(id)a1;

@end
