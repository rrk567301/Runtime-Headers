@class NSString, NSXPCConnection, APUnfairLock, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface APXPCRemoteConnection : NSObject

@property (nonatomic) int numClients;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSString *machService;
@property (readonly, nonatomic) APUnfairLock *unfairLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedConnections;
+ (id)connectionForMachService:(id)a0;
+ (id)connectionFor:(id)a0;
+ (id)sharedConnectionFor:(id)a0;
+ (void)addSharedConnection:(id)a0 forMachService:(id)a1;
+ (void)removeSharedConnectionForMachService:(id)a0;

- (void)addDelegate:(id)a0;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)initWithDelegate:(id)a0;
- (void)increaseConnectionCount;
- (void)decreaseConnectionCount;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)invalidateForDelegate:(id)a0;
- (void)dealloc;

@end
