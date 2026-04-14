@class Protocol;

@interface _MPMiddlewareChainBuilderProxy : NSProxy {
    Protocol *_protocol;
}

+ (id)allocWithProtocol:(id)a0;

- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;

@end
