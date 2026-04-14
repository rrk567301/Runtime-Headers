@protocol IMAPMessageDataSource;

@interface IMAPPersistenceTask : IMAPTask

@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (long long)networkPriority;
- (id)initWithMailboxName:(id)a0;
- (id)nextNetworkOperation;
- (id)mailboxNameWithoutPII;

@end
