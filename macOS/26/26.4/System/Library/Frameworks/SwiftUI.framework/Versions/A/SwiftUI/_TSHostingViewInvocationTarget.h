@interface _TSHostingViewInvocationTarget : NSProxy {
    id /* block */ _handler;
}

- (id)initWithHandler:(id /* block */)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;

@end
