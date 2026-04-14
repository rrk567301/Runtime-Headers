@interface _IDSGenericCompletionHandler : IDSDelegateInfo

@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0 queue:(id)a1;
- (void)dealloc;

@end
