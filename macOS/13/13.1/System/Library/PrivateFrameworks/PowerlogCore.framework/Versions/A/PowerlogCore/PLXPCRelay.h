@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface PLXPCRelay : NSObject

@property (retain) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *relayConnection;
@property (retain) NSObject<OS_xpc_object> *xpcCrashMoverConn;
@property (retain) NSObject<OS_dispatch_queue> *crashMoverQueue;
@property BOOL relayActive;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isDebugEnabled;
- (void)startRelay;
- (void)stopRelay;
- (void)handleCrashMoverConnection:(id)a0;
- (void)movePowerlogs;
- (void)handlePeer:(id)a0 forEvent:(id)a1;
- (void)resetRelayConnection;

@end
