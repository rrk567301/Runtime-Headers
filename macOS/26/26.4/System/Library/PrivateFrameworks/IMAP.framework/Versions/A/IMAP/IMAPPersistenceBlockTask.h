@class IMAPPersistenceBlockOperation;
@protocol IMAPMessageDataSource;

@interface IMAPPersistenceBlockTask : MCTask

@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;
@property (readonly, nonatomic) id /* block */ block;
@property (retain, nonatomic) IMAPPersistenceBlockOperation *operation;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)operationFinished:(id)a0;
- (id)nextNetworkOperation;
- (id)nextPersistenceOperation;
- (void)recalculatePriorities;
- (id)initWithDataSource:(id)a0 priority:(long long)a1 block:(id /* block */)a2;

@end
