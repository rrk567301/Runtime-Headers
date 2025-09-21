@class Protocol;

@interface IMInvocationCapturingProxy : NSProxy

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, copy, nonatomic) id /* block */ forwardingHandler;

- (char)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0 forwardingHandler:(id /* block */)a1;

@end
