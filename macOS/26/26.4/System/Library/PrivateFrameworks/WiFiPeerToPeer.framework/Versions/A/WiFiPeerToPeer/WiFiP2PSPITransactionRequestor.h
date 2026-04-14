@class NSString, NSMutableArray, WiFiP2PXPCConnection;

@interface WiFiP2PSPITransactionRequestor : NSObject <WiFiP2PXPCConnectionDelegate> {
    NSMutableArray *_openTransactions;
    WiFiP2PXPCConnection *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)endTransaction:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_removeOpenTransaction:(long long)a0;
- (void)handleConnectionEstablishedWithProxy:(id)a0;
- (id)remoteObjectInterface;
- (void)endTransaction:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginTransaction:(long long)a0 completionHandler:(id /* block */)a1;

@end
