@protocol INImageProxyInjecting;

@interface INImageProxyInjectionOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
}

@property (retain, nonatomic) id<INImageProxyInjecting> injector;
@property (copy, nonatomic) id /* block */ imageProxyRequestBlock;
@property (copy, nonatomic) id /* block */ copyReturnBlock;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;

@end
