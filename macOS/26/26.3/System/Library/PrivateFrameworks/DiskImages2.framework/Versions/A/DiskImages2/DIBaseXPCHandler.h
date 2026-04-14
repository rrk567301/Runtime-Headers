@class NSObject, NSError, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface DIBaseXPCHandler : NSObject

@property (retain, nonatomic) id remoteProxy;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSError *xpcError;
@property (nonatomic) BOOL isPrivileged;

- (id)remoteObjectInterface;
- (BOOL)connectWithError:(id *)a0;
- (void)createConnection;
- (id)init;
- (void)closeConnection;
- (id)serviceName;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)completeCommandWithError:(id *)a0;
- (BOOL)dupStderrWithError:(id *)a0;
- (void)signalCommandCompletedWithXpcError:(id)a0;

@end
