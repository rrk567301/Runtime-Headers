@protocol INImageProxyInjecting;

@interface INImageProxyInjectionOperation : NSOperation {
    char _isFinished;
    char _isExecuting;
}

@property (retain, nonatomic) id<INImageProxyInjecting> injector;
@property (copy, nonatomic) id /* block */ imageProxyRequestBlock;
@property (copy, nonatomic) id /* block */ copyReturnBlock;

- (void).cxx_destruct;
- (void)start;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;

@end
