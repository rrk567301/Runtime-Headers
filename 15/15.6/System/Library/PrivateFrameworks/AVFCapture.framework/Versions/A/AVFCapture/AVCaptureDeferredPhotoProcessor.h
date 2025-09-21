@class NSArray, NSString, AVWeakReference, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVCaptureDeferredPhotoProcessor : NSObject {
    NSString *_applicationIDOverride;
    NSObject<OS_dispatch_queue> *_processorQueue;
    struct OpaqueFigCaptureDeferredPhotoProcessor { } *_processor;
    AVWeakReference *_weakReference;
    struct OpaqueFigSimpleMutex { } *_requestsLock;
    NSMutableArray *_requests;
    char _requestsWillBeReenqueued;
    NSObject<OS_dispatch_queue> *_processPhotoProxyQueue;
    NSObject<OS_dispatch_queue> *_reenqueuePhotoProxyQueue;
}

@property (readonly, nonatomic) NSArray *persistentlyStoredDeferredPhotoProxies;

+ (void)initialize;
+ (id)sharedPhotoProcessor;
+ (id)sharedPhotoProcessorForApplicationID:(id)a0;

- (void)dealloc;
- (char)isPaused;
- (void)setPaused:(char)a0;
- (void)_dispatchFailureCallbacks:(unsigned int)a0 forProcessingRequest:(id)a1 error:(id)a2;
- (int)_establishServerConnection;
- (int)_executeBlockOnProcessorQueueSync:(id /* block */)a0;
- (char)_getValueForBooleanProperty:(struct __CFString { } *)a0;
- (void)_handleDidFinishProcessingPhotoProxyNotificationWithPayload:(id)a0 forRequest:(id)a1;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (int)_handleProcessorQueueBlockError:(int)a0;
- (void)_handleServerConnectionDiedAndRequestsWillBeReenqueued;
- (void)_handleServerConnectionDiedSendingClientNotification:(char)a0;
- (void)_handleWillAbortProcessingDueToPriorityInversion;
- (void)_handleWillBeginProcessingPhotoProxyNotificationWithPayload:(id)a0 forRequest:(id)a1;
- (void)_processPhotoProxy:(id)a0 queuePosition:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (id)_processingRequestForCaptureRequestIdentifier:(id)a0;
- (void)_reenqueueRequestsAfterPriorityInversion;
- (void)_resetFigCaptureDeferredPhotoProcessor;
- (void)_setFigCaptureDeferredPhotoProcessor:(struct OpaqueFigCaptureDeferredPhotoProcessor { } *)a0;
- (void)cancelAllPrewarming;
- (char)cancelProcessingForPhotoProxy:(id)a0 error:(id *)a1;
- (void)deletePersistentStorageForPhotoProxy:(id)a0;
- (id)initWithApplicationIDOverride:(id)a0;
- (char)lastJobReusedGraph;
- (id)prettyPrintDescriptionForContainer:(id)a0;
- (void)prewarmWithSettings:(id)a0;
- (void)processPhotoProxy:(id)a0 queuePosition:(id)a1 delegate:(id)a2;
- (void)processPhotoProxy:(id)a0 queuePosition:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;

@end
