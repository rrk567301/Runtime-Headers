@class NSObject, RTInvocationDispatcher, RTIntermittentGNSSManager;
@protocol OS_dispatch_queue, RTDaemonClientRegistrarRemoteStatusProtocol;

@interface RTDaemonClientRegistrarRemoteStatus : RTDaemonClientRegistrar {
    BOOL _observingManager;
}

@property (retain, nonatomic) RTIntermittentGNSSManager *manager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (weak, nonatomic) id<RTDaemonClientRegistrarRemoteStatusProtocol> delegate;

- (BOOL)registered;
- (void).cxx_destruct;
- (BOOL)startMonitoringForRemoteStatus:(id *)a0;
- (void)addPendingRemoteStatusUpdateBlock:(id /* block */)a0 failBlock:(id /* block */)a1 description:(id)a2;
- (id)initWithIntermittentGNSSManager:(id)a0 queue:(id)a1;
- (void)onRemoteStatusUpdateNotification:(id)a0;
- (void)stopMonitoringRemoteStatus;

@end
