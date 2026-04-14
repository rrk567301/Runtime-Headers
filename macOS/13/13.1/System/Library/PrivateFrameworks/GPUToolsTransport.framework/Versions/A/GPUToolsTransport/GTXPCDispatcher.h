@class NSSet;

@interface GTXPCDispatcher : NSObject <GTXPCDispatcher> {
    NSSet *_protocolMethods;
}

- (void).cxx_destruct;
- (id)initWithProtocolMethods:(id)a0;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;

@end
