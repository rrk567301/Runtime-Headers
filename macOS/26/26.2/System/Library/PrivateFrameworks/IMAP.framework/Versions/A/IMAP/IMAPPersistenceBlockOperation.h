@interface IMAPPersistenceBlockOperation : IMAPPersistenceTaskOperation

@property (nonatomic) BOOL blockCompleted;
@property (readonly, nonatomic) id /* block */ block;

- (id)initWithDataSource:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 block:(id /* block */)a1;

@end
