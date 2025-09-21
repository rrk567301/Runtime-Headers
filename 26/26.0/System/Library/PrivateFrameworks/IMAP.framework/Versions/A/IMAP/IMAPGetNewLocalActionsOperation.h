@protocol IMAPAccount, IMAPGetNewLocalActionsOperationDelegate;

@interface IMAPGetNewLocalActionsOperation : IMAPPersistenceTaskOperation

@property (readonly, nonatomic) long long previousActionID;
@property (readonly, nonatomic) id<IMAPAccount> account;
@property (weak, nonatomic) id<IMAPGetNewLocalActionsOperationDelegate> delegate;

- (void)main;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithPreviousActionID:(long long)a0 account:(id)a1;

@end
