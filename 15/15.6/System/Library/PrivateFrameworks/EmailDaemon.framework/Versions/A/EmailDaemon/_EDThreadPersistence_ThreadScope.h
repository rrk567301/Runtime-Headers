@class _EDThreadPersistence_SQLHelper, EDMessagePersistence;
@protocol EFSQLExpressable;

@interface _EDThreadPersistence_ThreadScope : NSObject {
    char _didCreateTempScopeView;
}

@property (readonly, nonatomic) id<EFSQLExpressable> threadScopeExpression;
@property (readonly, nonatomic) _EDThreadPersistence_SQLHelper *sqlHelper;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) long long threadScopeDatabaseID;

- (void).cxx_destruct;
- (char)_dropTemporaryView;
- (char)_ensureTempScopeView;
- (char)createMessagesWithThreadObjectID:(id)a0 wrappedMessages:(id)a1 threadMessages:(id *)a2;
- (id)initWithCache:(id)a0 messagePersistence:(id)a1 threadScopeDatabaseID:(long long)a2 threadScopeExpression:(id)a3;

@end
