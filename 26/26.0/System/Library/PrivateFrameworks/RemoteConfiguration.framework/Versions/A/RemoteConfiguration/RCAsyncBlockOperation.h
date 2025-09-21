@interface RCAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) id /* block */ block;

+ (id)asyncBlockOperationWithMainThreadBlock:(id /* block */)a0;
+ (id)asyncBlockOperationWithBlock:(id /* block */)a0;

- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isExecuting;
- (void)start;
- (id)init;
- (void).cxx_destruct;

@end
