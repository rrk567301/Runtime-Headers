@class NSString, CAContext;

@interface NSRemoteViewHostAppListenerDelegate : ListenerDelegate <NSXPCConnectionDelegate, NSVBXPCConnectionClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CAContext *fenceContext;
@property (readonly) char isValid;

- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(char)a2;
- (id)_invalidateDueToExceptionDuringIncomingIPC:(id)a0;

@end
