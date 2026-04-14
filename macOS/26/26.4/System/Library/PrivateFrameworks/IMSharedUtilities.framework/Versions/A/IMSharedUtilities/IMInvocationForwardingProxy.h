@class Protocol;

@interface IMInvocationForwardingProxy : NSProxy

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, copy, nonatomic) id /* block */ forwardingHandler;

- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithProtocol:(id)a0 forwardingHandler:(id /* block */)a1;

@end
