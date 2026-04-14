@class NSString, NSXPCConnection, APUnfairLock, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface APXPCRemoteConnection : NSObject

@property (nonatomic) int numClients;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSString *machService;
@property (readonly, nonatomic) APUnfairLock *unfairLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)addSharedConnection:(id)a0 forMachService:(id)a1;
+ (void)removeSharedConnectionForMachService:(id)a0;
+ (id)sharedConnections;
+ (id)connectionForMachService:(id)a0;
+ (id)sharedConnectionFor:(id)a0;
+ (id)connectionFor:(id)a0;

- (void)dealloc;
- (void)addDelegate:(id)a0;
- (void)decreaseConnectionCount;
- (void)connectionInvalidated;
- (void)removeDelegate:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)invalidateForDelegate:(id)a0;
- (void)connectionInterrupted;
- (void)increaseConnectionCount;
- (void).cxx_destruct;

@end
