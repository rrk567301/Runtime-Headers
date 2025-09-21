@class NSSet;

@interface GTXPCDispatcher : NSObject <GTXPCDispatcher> {
    NSSet *_protocolMethods;
}

- (void).cxx_destruct;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;
- (id)initWithProtocolMethods:(id)a0;

@end
