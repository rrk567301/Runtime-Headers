@interface IMAPNetworkBlockOperation : IMAPNetworkTaskOperation

@property (nonatomic) BOOL blockCompleted;
@property (copy, nonatomic) id /* block */ block;

- (void)main;
- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (id)initWithBlock:(id /* block */)a0 mailboxName:(id)a1;

@end
