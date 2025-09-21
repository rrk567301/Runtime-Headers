@protocol MCMXPCMessage, MCMReply;

@interface MCMCommandOperationReclaimDiskSpace : MCMCommand

@property (readonly, nonatomic) id<MCMXPCMessage> message;
@property (readonly, nonatomic) id<MCMReply> handoffReply;
@property (readonly, nonatomic) char asynchronously;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (void)_deleteContainersAtDeathRowURL:(id)a0 error:(id *)a1;
- (void)_deleteContainersOnDeathRowWithCompletion:(id /* block */)a0;
- (char)_removeItemOrMoveToTempAtURL:(id)a0 error:(id *)a1;
- (id)initWithAsynchronously:(char)a0 context:(id)a1 resultPromise:(id)a2;
- (id)initWithAsynchronously:(char)a0 context:(id)a1 resultPromise:(id)a2 handoffForReply:(id)a3;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2 asyncResultPromise:(id)a3;
- (char)preflightClientAllowed;

@end
