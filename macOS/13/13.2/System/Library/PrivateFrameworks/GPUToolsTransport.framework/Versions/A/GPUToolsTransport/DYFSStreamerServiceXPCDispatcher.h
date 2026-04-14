@protocol DYFSStreamerService;

@interface DYFSStreamerServiceXPCDispatcher : GTXPCDispatcher <DYFSStreamerServiceXPCDispatcher> {
    id<DYFSStreamerService> _service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)initializeTransfer:(id)a0 replyConnection:(id)a1;
- (void)itemData_attributes_:(id)a0 replyConnection:(id)a1;
- (void)finishedSending:(id)a0 replyConnection:(id)a1;
- (void)streamAbort:(id)a0 replyConnection:(id)a1;

@end
