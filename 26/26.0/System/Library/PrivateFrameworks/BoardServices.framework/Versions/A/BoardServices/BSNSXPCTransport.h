@class _BSNSXPCCallbackTracking, NSString, BSXPCServiceConnection, NSArray, BSServiceDispatchQueue, BSCompoundAssertion, RBSAssertion;
@protocol BSNSXPCSending;

@interface BSNSXPCTransport : NSObject <BSNSXPCConnectionInternalConfiguring, BSServiceConnectionExternalMessageSessionControlling, _NSXPCTransport> {
    BSXPCServiceConnection *_connection;
    NSString *_explanation;
    NSArray *_perMessageAttributes;
    BSCompoundAssertion *_refCounter;
    RBSAssertion *_refCountedAssertion;
    id /* block */ _assertionProvider;
    id<BSNSXPCSending> _sendingQueue;
    BSServiceDispatchQueue *_queue;
    _BSNSXPCCallbackTracking *_callbackTracking;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _messageOptions;
    BOOL _activateOnResume;
    BOOL _faultOnSuspend;
    BOOL _lock_faultedOnSuspend;
    BOOL _lock_cancelEnqueued;
    BOOL _lock_cancelProcessed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)auditSessionIdentifier;
- (void)sendMessage:(id)a0;
- (void)setErrorHandler:(id /* block */)a0;
- (void)cancel;
- (void)suspend;
- (int)processIdentifier;
- (void)resume;
- (void)setMessageHandler:(id /* block */)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (unsigned int)effectiveUserIdentifier;
- (unsigned int)effectiveGroupIdentifier;
- (id)sendMessageWithReplySync:(id)a0;
- (void)activate;
- (void)setTargetQueue:(id)a0;
- (void).cxx_destruct;
- (void)sendBarrierBlock:(id /* block */)a0;
- (void)sendMessageWithReply:(id)a0 onQueue:(id)a1 replyHandler:(id /* block */)a2;
- (void)sendNotification:(id)a0;
- (void)_setSendingQueue:(id)a0;
- (id)newExternalMessageSessionWithReason:(id)a0;
- (void)setActivateOnResume;
- (void)setEventObserver:(id)a0;
- (void)setFaultOnSuspend;
- (void)setPerMessageAssertionAttributes:(id)a0;
- (void)setRefCountedAssertionAttributes:(id)a0;
- (void)setSendingQueue:(id)a0;

@end
