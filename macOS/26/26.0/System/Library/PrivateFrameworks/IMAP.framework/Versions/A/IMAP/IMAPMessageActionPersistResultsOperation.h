@class ECLocalMessageActionResults, ECLocalMessageAction;
@protocol IMAPMessageActionPersistResultsOperationDelegate;

@interface IMAPMessageActionPersistResultsOperation : IMAPPersistenceTaskOperation

@property (readonly, nonatomic) ECLocalMessageAction *messageAction;
@property (readonly, nonatomic) ECLocalMessageActionResults *results;
@property (weak, nonatomic) id<IMAPMessageActionPersistResultsOperationDelegate> delegate;

- (void)main;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageAction:(id)a0 results:(id)a1 dataSource:(id)a2;

@end
