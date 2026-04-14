@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, SSConnectionProxyDelegate;

@interface SSMachServiceConnectionProxy : NSObject <SSConnectionProxy>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSSet *allowedIncomingCommands;
@property (weak, nonatomic) id<SSConnectionProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMachServiceName:(id)a0;
- (void)activate;
- (void)send:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleConnectionEvent:(id)a0;

@end
