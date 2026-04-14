@class NSString;
@protocol SFAirDropClassroomTransferDelegate;

@interface SFAirDropClassroomTransferManager : SFXPCClient <SFAirDropClassroomTransferManagerProtocol>

@property (weak, nonatomic) id<SFAirDropClassroomTransferDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (id)machServiceName;
- (void)activate;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)exportedInterface;
- (void)transferWithIdentifierWasAccepted:(id)a0;
- (id)remoteObjectInterface;
- (void)updateTransferWithIdentifier:(id)a0 withState:(long long)a1 information:(id)a2 completionHandler:(id /* block */)a3;
- (void)transferWithIdentifierWasDeclined:(id)a0 withFailureReason:(unsigned long long)a1;

@end
