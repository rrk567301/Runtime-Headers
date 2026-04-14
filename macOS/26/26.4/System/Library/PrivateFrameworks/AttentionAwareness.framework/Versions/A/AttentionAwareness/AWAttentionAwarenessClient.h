@class AWAttentionAwarenessConfiguration, AWAttentionEvent, NSString, NSUUID, NSObject, AWClientPollWaiter;
@protocol OS_dispatch_queue, NSXPCProxyCreating;

@interface AWAttentionAwarenessClient : NSObject <AWServiceObserver, AWFrameworkClient> {
    NSObject<OS_dispatch_queue> *_queue;
    AWClientPollWaiter *_pollWaiter;
    id<NSXPCProxyCreating> _remoteClientProxy;
    unsigned long long _suspensionCount;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_clientNotifQueue;
    id /* block */ _clientNotifBlock;
    NSObject<OS_dispatch_queue> *_clientEventQueue;
    id /* block */ _clientEventBlock;
    NSObject<OS_dispatch_queue> *_clientStreamingQueue;
    id /* block */ _clientStreamingBlock;
    AWAttentionAwarenessConfiguration *_configuration;
    BOOL _unitTestMode;
    int _clientIndex;
    BOOL _lastAttentionState;
    NSUUID *_clientId;
    BOOL _eventDelivered;
}

@property (copy, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property (readonly, retain, nonatomic) AWAttentionEvent *lastEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)resumeWithError:(id *)a0;
- (id)getEventMaskDescription:(unsigned long long)a0;
- (BOOL)suspendWithError:(id *)a0;
- (void)setUnitTestMode:(BOOL)a0;
- (BOOL)invalidateWithError:(id *)a0;
- (BOOL)cancelPollForAttentionWithError:(id *)a0;
- (BOOL)invokeRequiringClient:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)unitTestSampler;
- (void)setEventStreamerWithQueue:(id)a0 block:(id /* block */)a1;
- (BOOL)pollForAttentionWithTimeout:(double)a0 event:(id *)a1 error:(id *)a2;
- (BOOL)resetAttentionLostTimeoutWithError:(id *)a0;
- (void)notifyEvent:(id)a0;
- (void)serviceInterrupted;
- (void)notifyPollEventType:(unsigned long long)a0 event:(id)a1;
- (id)connect:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_invokeRequiringClient:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)init;
- (void)notifyStreamingEvent:(id)a0;
- (BOOL)cancelFaceDetectStreamWithError:(id *)a0;
- (BOOL)pollForAttentionWithTimeout:(double)a0 queue:(id)a1 block:(id /* block */)a2 error:(id *)a3;
- (void)notify:(unsigned long long)a0;
- (id)startStream;
- (BOOL)setConfiguration:(id)a0 shouldReset:(BOOL)a1 error:(id *)a2;
- (BOOL)invalidateRemoteClientWithError:(id *)a0;
- (void)setNotificationHandlerWithQueue:(id)a0 block:(id /* block */)a1;
- (void)setConfiguration:(id)a0 shouldReset:(BOOL)a1;
- (void)setEventHandlerWithQueue:(id)a0 block:(id /* block */)a1;

@end
