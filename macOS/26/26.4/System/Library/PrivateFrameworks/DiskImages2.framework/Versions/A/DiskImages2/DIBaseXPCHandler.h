@class NSObject, NSError, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface DIBaseXPCHandler : NSObject

@property (retain, nonatomic) id remoteProxy;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSError *xpcError;
@property (nonatomic) BOOL isPrivileged;

- (void)closeConnection;
- (id)serviceName;
- (id)remoteObjectInterface;
- (void)createConnection;
- (void).cxx_destruct;
- (id)init;
- (BOOL)connectWithError:(id *)a0;
- (void)dealloc;
- (BOOL)completeCommandWithError:(id *)a0;
- (BOOL)dupStderrWithError:(id *)a0;
- (void)signalCommandCompletedWithXpcError:(id)a0;

@end
