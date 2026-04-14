@protocol IMAPSelectMailboxOperationDelegate;

@interface IMAPSelectMailboxOperation : IMAPNetworkTaskOperation

@property (readonly, weak, nonatomic) id<IMAPSelectMailboxOperationDelegate> delegate;

- (void)main;
- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (id)initWithMailboxName:(id)a0 delegate:(id)a1;

@end
