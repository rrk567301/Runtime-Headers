@class NSString, NSMutableDictionary;
@protocol SFAirDropTransferObserverDelegate;

@interface _SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol>

@property (retain) NSMutableDictionary *transferIdentifierToTransfer;
@property (weak, nonatomic) id<SFAirDropTransferObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removedTransfer:(id)a0;
- (void)activate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)remoteObjectInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)invalidate;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (id)init;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)updatedTransfer:(id)a0;
- (void)updateActionHandlersOnTransfer:(id)a0;
- (void)observeForLocalOnlyPropertiesOnTransfer:(id)a0;
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)a0;

@end
