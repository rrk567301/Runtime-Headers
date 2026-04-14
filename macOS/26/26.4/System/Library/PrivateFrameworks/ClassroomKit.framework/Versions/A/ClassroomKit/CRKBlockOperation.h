@interface CRKBlockOperation : CATOperation

@property (readonly, nonatomic) id /* block */ operationBlock;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (BOOL)isAsynchronous;
- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithOperationBlock:(id /* block */)a0;

@end
