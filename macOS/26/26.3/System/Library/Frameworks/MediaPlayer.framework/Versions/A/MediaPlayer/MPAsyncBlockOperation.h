@interface MPAsyncBlockOperation : MPAsyncOperation

@property (readonly, copy, nonatomic) id /* block */ startHandler;

- (id)initWithStartHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)execute;

@end
