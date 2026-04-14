@protocol MCMXPCMessage, MCMReply;

@interface MCMCommandOperationReclaimDiskSpace : MCMCommand

@property (readonly, nonatomic) id<MCMXPCMessage> message;
@property (readonly, nonatomic) id<MCMReply> handoffReply;
@property (readonly, nonatomic) BOOL asynchronously;

+ (Class)incomingMessageClass;
+ (unsigned long long)command;

- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2 asyncResultPromise:(id)a3;
- (BOOL)preflightClientAllowed;
- (BOOL)_removeItemOrMoveToTempAtURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)_deleteContainersOnDeathRowWithCompletion:(id /* block */)a0;
- (id)initWithAsynchronously:(BOOL)a0 context:(id)a1 resultPromise:(id)a2 handoffForReply:(id)a3;
- (void)execute;
- (void)_deleteContainersAtDeathRowURL:(id)a0 error:(id *)a1;
- (id)initWithAsynchronously:(BOOL)a0 context:(id)a1 resultPromise:(id)a2;

@end
