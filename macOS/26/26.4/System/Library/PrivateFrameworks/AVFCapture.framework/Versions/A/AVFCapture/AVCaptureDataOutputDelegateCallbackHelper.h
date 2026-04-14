@class NSString, AVWeakReferencingDelegateStorage, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureDataOutputDelegateCallbackHelper : NSObject {
    NSString *_defaultCallbackQueueName;
    NSObject<OS_dispatch_queue> *_defaultCallbackQueue;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    AVWeakReferencingDelegateStorage *_delegateOverrideStorage;
    struct localQueueOpaque { } *_localQueue;
    id /* block */ _localQueueHandler;
    BOOL _canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd;
}

@property (readonly) id activeDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *activeCallbackQueue;
@property (readonly) id clientDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (readonly) id delegateOverride;
@property (readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;

+ (void)initialize;

- (id)initWithQueueName:(id)a0 canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd:(BOOL)a1;
- (BOOL)setClientDelegate:(id)a0 clientCallbackQueue:(id)a1 exceptionReason:(id *)a2;
- (id)_activeCallbackQueue;
- (BOOL)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1 exceptionReason:(id *)a2;
- (BOOL)_validateCallbackQueue:(id)a0 exceptionReason:(id *)a1;
- (void)updateLocalQueue:(struct localQueueOpaque { } *)a0 handler:(id /* block */)a1;
- (id)_activeDelegate;
- (void)dealloc;

@end
