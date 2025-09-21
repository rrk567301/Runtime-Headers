@interface _TtCC19ExtensionFoundation16_EXServiceClientP33_591406279EDD09BF7033B88E7B83DCFD17ActiveClientQuery : NSObject <NSXPCListenerDelegate, ExtensionFoundation._EXQueryResultsProtocol> {
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ started;
    void /* unknown type, empty encoding */ _observers;
    void /* unknown type, empty encoding */ xpcListener;
    void /* unknown type, empty encoding */ connection;
}

@property (nonatomic, readonly) long long hash;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)query:(id)a0 resultDidUpdate:(id)a1 reply:(id /* block */)a2;

@end
