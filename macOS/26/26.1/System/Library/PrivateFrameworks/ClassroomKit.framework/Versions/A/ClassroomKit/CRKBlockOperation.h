@interface CRKBlockOperation : CATOperation

@property (readonly, nonatomic) id /* block */ operationBlock;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (void)cancel;
- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)initWithOperationBlock:(id /* block */)a0;

@end
