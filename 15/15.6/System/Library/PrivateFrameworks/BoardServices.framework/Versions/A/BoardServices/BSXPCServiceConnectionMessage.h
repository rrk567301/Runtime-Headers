@class NSString, NSObject;
@protocol BSXPCServiceConnectionMessageDelegate, BSXPCServiceConnectionHandshake, BSServiceDispatchingQueue, OS_dispatch_queue;

@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSXPCServiceConnectionMessage, BSInvalidatable> {
    id<BSXPCServiceConnectionHandshake> _handshake;
    id<BSXPCServiceConnectionMessageDelegate> _delegate;
    int _sendFlag;
    char _batchable;
    char _notification;
    unsigned int _activationGeneration;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id /* block */ _completion;
    id<BSServiceDispatchingQueue> _replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithMessage:(id)a0;
- (char)send;
- (id)createReply;
- (char)sendSynchronously;
- (char)expectsReply;
- (id)sendSynchronouslyWithError:(out id *)a0;

@end
