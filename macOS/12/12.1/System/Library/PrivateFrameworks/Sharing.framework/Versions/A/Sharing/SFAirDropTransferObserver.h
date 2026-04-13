@class NSString, NSMutableDictionary;
@protocol SFAirDropTransferObserverDelegate;

@interface SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol>

@property (retain) NSMutableDictionary *transferIdentifierToTransfer;
@property (weak, nonatomic) id<SFAirDropTransferObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)activate;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (id)machServiceName;
- (void)updatedTransfer:(id)a0;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)observeForLocalOnlyPropertiesOnTransfer:(id)a0;
- (void)updateActionHandlersOnTransfer:(id)a0;
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)a0;
- (void)removedTransfer:(id)a0;
- (BOOL)shouldEscapeXpcTryCatch;

@end
