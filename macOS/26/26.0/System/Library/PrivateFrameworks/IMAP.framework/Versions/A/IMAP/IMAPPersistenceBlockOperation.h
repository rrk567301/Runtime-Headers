@interface IMAPPersistenceBlockOperation : IMAPPersistenceTaskOperation

@property (nonatomic) BOOL blockCompleted;
@property (readonly, nonatomic) id /* block */ block;

- (void)main;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 block:(id /* block */)a1;

@end
