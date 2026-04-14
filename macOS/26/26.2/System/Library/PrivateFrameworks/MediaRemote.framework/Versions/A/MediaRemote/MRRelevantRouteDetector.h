@class NSString, MRAVRoutingDiscoverySession, NSObject, NSMutableArray;
@protocol MRRelevantRouteDetectorDelegate, OS_dispatch_queue, MRRelevantRouteDetectorDataSource;

@interface MRRelevantRouteDetector : NSObject

@property (weak, nonatomic) id<MRRelevantRouteDetectorDelegate> delegate;
@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) BOOL relevantRouteDetected;
@property (readonly, nonatomic) NSString *initiator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *discoverySession;
@property (retain, nonatomic) NSMutableArray *relevantEndpoints;
@property (readonly, weak, nonatomic) id<MRRelevantRouteDetectorDataSource> dataSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic, getter=isMonitoring) BOOL monitoring;

- (void)stopMonitoring;
- (void)startMonitoring;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)_handleOutputDevicesDidChangeNotification:(id)a0;
- (id)description;
- (void)_stopMonitoring;
- (void)_handleEndpointDidDisconnectNotification:(id)a0;
- (void)dealloc;
- (BOOL)_isEndpointRelevant:(id)a0;
- (BOOL)_isOutputDeviceRelevant:(id)a0;
- (void)_onQueue_addRelevantEndpoints:(id)a0 withReason:(id)a1;
- (void)_onQueue_reevaluateWithReason:(id)a0;
- (BOOL)_onQueue_relevantRouteCurrentlyDetected;
- (void)_onQueue_startMonitoring;
- (void)_registerForNotificationsForEndpoint:(id)a0;
- (void)_unregisterForNotificationsForEndpoint:(id)a0;
- (id)initWithInitiator:(id)a0 delegate:(id)a1 dataSource:(id)a2 delegateQueue:(id)a3;

@end
