@class NSXPCConnection;

@interface CXNotificationServiceExtensionVoIPXPCClient : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (retain, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)requestApplicationLaunchForIncomingCall:(id)a0 completion:(id /* block */)a1;
- (char)requestDidArriveFromExtensionPoint;
- (char)taskHasEntitlement:(id)a0;

@end
