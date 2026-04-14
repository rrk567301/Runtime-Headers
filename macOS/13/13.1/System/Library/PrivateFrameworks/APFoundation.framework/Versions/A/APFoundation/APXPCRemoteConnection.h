@class NSString, NSXPCConnection, APUnfairLock, NSMutableArray;

@interface APXPCRemoteConnection : NSObject

@property (nonatomic) int numClients;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSString *machService;
@property (readonly, nonatomic) APUnfairLock *unfairLock;

+ (id)connectionForMachService:(id)a0;
+ (id)connectionFor:(id)a0;
+ (id)sharedConnectionFor:(id)a0;
+ (id)sharedConnections;
+ (void)addSharedConnection:(id)a0 forMachService:(id)a1;
+ (void)removeSharedConnectionForMachService:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)initWithDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)connectionInvalidated;
- (void)invalidateForDelegate:(id)a0;
- (void)decreaseConnectionCount;
- (void)increaseConnectionCount;

@end
