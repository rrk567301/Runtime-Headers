@class RTDeviceLocationPredictor, RTHintManager, NSMutableDictionary, RTLocationAwarenessManager, NSObject, RTDefaultsManager, RTVisitFeedBuffer, RTPlatform, RTTimerManager, RTMetricManager, RTVisitLabeler, NSMutableSet, RTVisitMonitorState, RTLearnedLocationManager, RTLocationManager, RTTimer;
@protocol OS_dispatch_queue, RTVisitMonitorDelegate;

@interface RTVisitMonitor : NSObject {
    RTVisitFeedBuffer *_feedBuffer;
    RTTimer *_feedBufferTimer;
}

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationAwarenessManager *locationAwarenessManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTVisitLabeler *visitLabeler;
@property (retain, nonatomic) RTVisitMonitorState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long feedBufferReferenceCounter;
@property (nonatomic) unsigned long long lowConfidencePipelineReferenceCounter;
@property (nonatomic) unsigned long long highConfidencePipelineReferenceCounter;
@property (retain, nonatomic) NSMutableSet *pipelinesMonitoringRegion;
@property (retain, nonatomic) NSMutableDictionary *pipelines;
@property (nonatomic) BOOL monitoringVisitIncidents;
@property (nonatomic) BOOL monitoringLeechedVisitIncidents;
@property (nonatomic) BOOL monitoringLowConfidenceVisitIncidents;
@property (weak, nonatomic) id<RTVisitMonitorDelegate> delegate;

+ (id)hyperParameterForPipelineType:(unsigned long long)a0;
+ (id)regionMonitoringClientIdentifierForPipelineType:(unsigned long long)a0;
+ (long long)hintSourceForRegionCallbackType:(long long)a0;
+ (id)bucketLocations:(id)a0 interval:(double)a1;
+ (double)LocationHeartbeatWhileAwake;
+ (id)regionWithRegionIdentifier:(id)a0 location:(id)a1 shouldNotifyForEntry:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (void)_shutdown;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)fetchVisitsFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 hintManager:(id)a2 learnedLocationManager:(id)a3 locationAwarenessManager:(id)a4 locationManager:(id)a5 metricManager:(id)a6 platform:(id)a7 queue:(id)a8 state:(id)a9 timerManager:(id)a10 visitLabeler:(id)a11;
- (void)_startFeedBuffer;
- (void)_stopFeedBuffer;
- (id)_configurationForPipelineType:(unsigned long long)a0;
- (id)_moduleWithName:(id)a0 pipelineType:(unsigned long long)a1 hyperParameter:(id)a2;
- (double)maxHorizontalAccuracyOverride;
- (id)_modulesForPipelineType:(unsigned long long)a0 hyperParameter:(id)a1;
- (id)_createPipelineWithType:(unsigned long long)a0 name:(id)a1 lastVisit:(id)a2;
- (void)_bootstrapPipeline:(id)a0 handler:(id /* block */)a1;
- (void)handleRegionCallback:(long long)a0 region:(id)a1 clientIdentifier:(id)a2;
- (void)_processRealtimeVisits:(id)a0 pipeline:(id)a1;
- (void)_batchProcess:(id)a0 fromDate:(id)a1 toDate:(id)a2 handler:(id /* block */)a3;
- (unsigned long long)visitPipelineTypeOverride;
- (void)_setupRealtimePipelineWithType:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)_stopMonitoringAllRegionsForPipelineType:(unsigned long long)a0;
- (void)onLeechedLocationsNotification:(id)a0;
- (void)_processLeechedLocations:(id)a0;
- (void)_processMatureLocations;
- (void)_startFeedBufferTimer;
- (BOOL)_setupGeoFencesForVisit:(id)a0 pipelineType:(unsigned long long)a1 error:(id *)a2;
- (void)handleVisitIncident:(id)a0;
- (void)logHintSourceUsageWithLocation:(id)a0;
- (void)handleLowConfidenceVisitIncident:(id)a0;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 hintManager:(id)a2 learnedLocationManager:(id)a3 locationAwarenessManager:(id)a4 locationManager:(id)a5 metricManager:(id)a6 platform:(id)a7 queue:(id)a8 state:(id)a9 visitLabeler:(id)a10;
- (void)_registerVisitMonitorForRegionEventsForPipelineType:(unsigned long long)a0;
- (void)_unregisterVisitMonitorForRegionEventsForPipelineType:(unsigned long long)a0;
- (void)startMonitoringVisitIncidents;
- (void)stopMonitoringVisitIncidents;
- (void)startMonitoringLeechedVisitIncidents;
- (void)stopMonitoringLeechedVisitIncidents;
- (void)startMonitoringLowConfidenceVisitIncidents;
- (void)stopMonitoringLowConfidenceVisitIncidents;
- (void)setupGeoFencesForVisit:(id)a0 pipelineType:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)fetchVisitMonitorStatusWithHandler:(id /* block */)a0;
- (void)fetchVisitMonitorState:(id /* block */)a0;

@end
