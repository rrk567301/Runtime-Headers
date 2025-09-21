@interface IMAPNetworkBlockOperation : IMAPNetworkTaskOperation

@property (nonatomic) char blockCompleted;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)main;
- (id)initWithMailboxName:(id)a0;
- (id)initWithBlock:(id /* block */)a0 mailboxName:(id)a1;

@end
