@interface CRKBlockOperation : CATOperation

@property (readonly, nonatomic) id /* block */ operationBlock;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)cancel;
- (char)isAsynchronous;
- (void)main;
- (id)initWithOperationBlock:(id /* block */)a0;

@end
