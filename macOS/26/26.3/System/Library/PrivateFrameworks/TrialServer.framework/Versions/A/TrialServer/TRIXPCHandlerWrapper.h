@class Protocol, NSObject;

@interface TRIXPCHandlerWrapper : NSObject {
    NSObject *_underlying;
    Protocol *_protocol;
}

+ (id)_symbolicatedBacktraceWithAddresses:(id)a0 unresolvedSymbols:(id)a1;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithUnderlyingHandler:(id)a0 forProtocol:(id)a1;

@end
