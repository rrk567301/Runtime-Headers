@class NSString, NSObject;
@protocol OS_dispatch_queue, BSServiceDispatchingQueue, BSXPCServiceConnectionHandshake;

@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSXPCServiceConnectionMessage, BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_targetQueue;
    id<BSXPCServiceConnectionHandshake> _handshake;
    int _sendFlag;
    BOOL _notification;
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
- (BOOL)send;
- (BOOL)expectsReply;
- (id)createReply;
- (BOOL)sendSynchronously;
- (id)sendSynchronouslyWithError:(out id *)a0;

@end
