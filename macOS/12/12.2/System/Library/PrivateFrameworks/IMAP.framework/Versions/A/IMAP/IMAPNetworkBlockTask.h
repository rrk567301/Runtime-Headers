@class IMAPTaskManager, NSString, IMAPNetworkBlockOperation;

@interface IMAPNetworkBlockTask : IMAPTask

@property (retain, nonatomic) IMAPNetworkBlockOperation *operation;
@property (readonly, nonatomic) id /* block */ block;
@property (readonly, nonatomic) IMAPTaskManager *taskManager;
@property (readonly, nonatomic) long long taskPriority;
@property (readonly, copy, nonatomic) NSString *blockDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)operationFinished:(id)a0;
- (id)initWithMailboxName:(id)a0;
- (void)recalculatePriorities;
- (id)nextNetworkOperation;
- (id)nextPersistenceOperation;
- (id)mailboxNameWithoutPII;
- (id)initWithMailboxName:(id)a0 priority:(long long)a1 taskManager:(id)a2 description:(id)a3 block:(id /* block */)a4;

@end
