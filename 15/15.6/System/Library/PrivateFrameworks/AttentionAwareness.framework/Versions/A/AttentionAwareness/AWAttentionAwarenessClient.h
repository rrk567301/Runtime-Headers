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

- (id)init;
- (void).cxx_destruct;
- (char)invalidateWithError:(id *)a0;
- (id)connect:(BOOL)a0;
- (void)notifyEvent:(id)a0;
- (char)suspendWithError:(id *)a0;
- (char)resumeWithError:(id *)a0;
- (void)notify:(unsigned long long)a0;
- (id)startStream;
- (void)serviceInterrupted;
- (void)setEventHandlerWithQueue:(id)a0 block:(id /* block */)a1;
- (id)unitTestSampler;
- (char)_invokeRequiringClient:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)cancelFaceDetectStreamWithError:(id *)a0;
- (char)cancelPollForAttentionWithError:(id *)a0;
- (id)getEventMaskDescription:(unsigned long long)a0;
- (char)invalidateRemoteClientWithError:(id *)a0;
- (char)invokeRequiringClient:(BOOL)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)notifyPollEventType:(unsigned long long)a0 event:(id)a1;
- (void)notifyStreamingEvent:(id)a0;
- (char)pollForAttentionWithTimeout:(double)a0 event:(id *)a1 error:(id *)a2;
- (char)pollForAttentionWithTimeout:(double)a0 queue:(id)a1 block:(id /* block */)a2 error:(id *)a3;
- (char)resetAttentionLostTimeoutWithError:(id *)a0;
- (void)setConfiguration:(id)a0 shouldReset:(BOOL)a1;
- (char)setConfiguration:(id)a0 shouldReset:(BOOL)a1 error:(id *)a2;
- (void)setEventStreamerWithQueue:(id)a0 block:(id /* block */)a1;
- (void)setNotificationHandlerWithQueue:(id)a0 block:(id /* block */)a1;
- (void)setUnitTestMode:(BOOL)a0;

@end
