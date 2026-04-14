@class NSString, BSServiceDispatchQueue, BSServiceQueue;
@protocol BSXPCServiceConnectionMessageDelegate, BSXPCServiceConnectionHandshake;

@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSXPCServiceConnectionMessage, BSInvalidatable> {
    id<BSXPCServiceConnectionHandshake> _handshake;
    id<BSXPCServiceConnectionMessageDelegate> _delegate;
    int _sendFlag;
    BOOL _batchable;
    BOOL _notification;
    unsigned int _activationGeneration;
    BSServiceDispatchQueue *_targetQueue;
    id /* block */ _completion;
    BSServiceQueue *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)sendSynchronously;
- (BOOL)send;
- (void).cxx_destruct;
- (void)invalidate;
- (id)sendSynchronouslyWithError:(out id *)a0;
- (id)createReply;
- (BOOL)expectsReply;
- (id)initWithMessage:(id)a0;

@end
