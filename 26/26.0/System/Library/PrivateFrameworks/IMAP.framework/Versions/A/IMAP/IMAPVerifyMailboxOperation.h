@protocol IMAPVerifyMailboxOperationDelegate;

@interface IMAPVerifyMailboxOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPVerifyMailboxOperationDelegate> delegate;

- (void)main;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;

@end
