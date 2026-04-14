@class RTInvocationDispatcher, NSString, RTTripSegmentManager, NSObject;
@protocol OS_dispatch_queue, RTDaemonClientRegistrarGeneratedTripSegmentProtocol;

@interface RTDaemonClientRegistrarGeneratedTripSegments : RTDaemonClientRegistrar <RTDaemonClientRegistrarProtocol>

@property (nonatomic) BOOL isMonitoring;
@property (retain, nonatomic) RTTripSegmentManager *tripSegmentManager;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<RTDaemonClientRegistrarGeneratedTripSegmentProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)countOfPendingInvocations;
- (BOOL)registered;
- (void).cxx_destruct;
- (void)stopMonitoringForGeneratedTripSegments;
- (BOOL)invocationsPending;
- (void)_onGeneratedTripSegmentNotification:(id)a0;
- (void)_startMonitoringForGeneratedTripSegments;
- (void)_stopMonitoringForGeneratedTripSegments;
- (void)enqueueGeneratedTripSegmentBlock:(id /* block */)a0 onFailureBlock:(id /* block */)a1 description:(id)a2;
- (id)initWithTripSegmentManager:(id)a0 onQueue:(id)a1;
- (void)onGeneratedTripSegmentNotification:(id)a0;
- (void)startMonitoringForGeneratedTripSegments;

@end
