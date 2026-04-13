@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface NSDockConnection : NSObject {
    BOOL _started;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _pid;
    id /* block */ _receiveHandler;
}

@property (readonly, copy) NSString *serviceName;

+ (id)allConnections;
+ (id)connectionWithServiceName:(id)a0;
+ (id)_nameToConnectionMap;

- (void)dealloc;
- (id)init;
- (void)sendMessage:(id)a0;
- (void)sendMessage:(id)a0 synchronous:(BOOL)a1 replyHandler:(id /* block */)a2;
- (id)initWithServiceName:(id)a0 receiveHandler:(id /* block */)a1;
- (void)reactToDockAlive;
- (void)startConnection;
- (void)reactToDockDied;
- (void)_makeConnectionIfNeededWithRetryInterval:(double)a0 onDemand:(BOOL)a1;
- (void)_makeConnectionIfNeeded;
- (void)_processEvent:(id)a0;
- (int)remotePid;

@end
