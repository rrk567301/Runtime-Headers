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

- (id)remoteObjectInterface;
- (void)handleConnectionEstablishedWithProxy:(id)a0;
- (void)endTransaction:(long long)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)beginTransaction:(long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeOpenTransaction:(long long)a0;
- (void)endTransaction:(long long)a0;

@end
