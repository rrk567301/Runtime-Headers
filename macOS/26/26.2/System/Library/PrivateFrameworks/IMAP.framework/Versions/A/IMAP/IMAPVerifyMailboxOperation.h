@protocol IMAPVerifyMailboxOperationDelegate;

@interface IMAPVerifyMailboxOperation : IMAPPersistenceTaskOperation

@property (readonly, weak, nonatomic) id<IMAPVerifyMailboxOperationDelegate> delegate;

- (id)initWithDataSource:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;

@end
