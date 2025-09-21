@class BSAuditToken, BSProcessHandle, NSString;
@protocol BSXPCDecoding;

@interface BSServiceListenerConnection : BSServiceConnection <BSServiceConnectionHost, BSXPCServiceConnectionMessaging, BSCancellable>

@property (readonly, nonatomic, getter=isRevoked) BOOL revoked;
@property (readonly, nonatomic) BSAuditToken *remoteToken;
@property (readonly, nonatomic) id<BSXPCDecoding> initiatingContext;
@property (readonly, nonatomic) BSProcessHandle *remoteProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure:(id /* block */)a0;
- (void)cancel;
- (id)addEventObserver:(id)a0;
- (void)_configure:(id /* block */)a0;

@end
