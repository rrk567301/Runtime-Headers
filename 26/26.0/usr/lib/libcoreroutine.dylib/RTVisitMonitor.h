@class RTDeviceLocationPredictor, RTHintManager, NSMutableDictionary, RTLocationAwarenessManager, NSObject, RTMotionActivityManager, RTDefaultsManager, RTVisitFeedBuffer, RTMetricManager, RTTimerManager, RTPlatform, RTLearnedLocationManager, RTVisitMonitorState, NSMutableSet, RTLocationManager, RTVisitLabeler, RTDistanceCalculator, RTTimer;
@protocol OS_dispatch_queue, RTVisitMonitorDelegate;

@interface RTVisitMonitor : NSObject {
    RTVisitFeedBuffer *_feedBuffer;
    RTTimer *_feedBufferTimer;
}

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationAwarenessManager *locationAwarenessManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTTimerManager *timerManager;
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
@property (retain, nonatomic) RTVisitLabeler *visitLabeler;
@property (weak, nonatomic) id<RTVisitMonitorDelegate> delegate;

+ (id)regionMonitoringClientIdentifierForPipelineType:(unsigned long long)a0;
+ (long long)hintSourceForRegionCallbackType:(long long)a0;
+ (double)LocationHeartbeatWhileAwake;
+ (id)bucketLocations:(id)a0 interval:(double)a1;
+ (id)hyperParameterForPipelineType:(unsigned long long)a0;
+ (id)regionWithRegionIdentifier:(id)a0 location:(id)a1 shouldNotifyForEntry:(BOOL)a2;

- (void)_processRealtimeVisits:(id)a0 pipeline:(id)a1;
- (void)_shutdown;
- (void)_processLeechedLocations:(id)a0;
- (unsigned long long)visitPipelineTypeOverride;
- (void)showVisitReentryDetectionUI;
- (void)handleLowConfidenceVisitIncident:(id)a0;
- (void)onLeechedLocationsNotification:(id)a0;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)_batchProcess:(id)a0 fromDate:(id)a1 toDate:(id)a2 handler:(id /* block */)a3;
- (void)startMonitoringLowConfidenceVisitIncidents;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 hintManager:(id)a2 learnedLocationManager:(id)a3 locationAwarenessManager:(id)a4 locationManager:(id)a5 metricManager:(id)a6 motionActivityManager:(id)a7 platform:(id)a8 queue:(id)a9 state:(id)a10 visitLabeler:(id)a11;
- (void)fetchVisitMonitorStatusWithHandler:(id /* block */)a0;
- (void)handleRegionCallback:(long long)a0 region:(id)a1 clientIdentifier:(id)a2;
- (void)startMonitoringLeechedVisitIncidents;
- (void)fetchVisitsFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)stopMonitoringLeechedVisitIncidents;
- (void)fetchVisitMonitorState:(id /* block */)a0;
- (id)init;
- (id)_updateSourceForVisit:(id)a0;
- (void)_stopMonitoringAllRegionsForPipelineType:(unsigned long long)a0;
- (void)_registerVisitMonitorForRegionEventsForPipelineType:(unsigned long long)a0;
- (void)compareVisit:(id)a0 previousVisit:(id)a1;
- (BOOL)_setupGeoFencesForVisit:(id)a0 pipelineType:(unsigned long long)a1 error:(id *)a2;
- (void)stopMonitoringLowConfidenceVisitIncidents;
- (id)_configurationForPipelineType:(unsigned long long)a0;
- (void)_setupRealtimePipelineWithType:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)_compareVisit:(id)a0 previousVisit:(id)a1;
- (void)setupGeoFencesForVisit:(id)a0 pipelineType:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)_startFeedBufferTimer;
- (void)_stopFeedBuffer;
- (id)_modulesForPipelineType:(unsigned long long)a0 hyperParameter:(id)a1;
- (void)startMonitoringVisitIncidents;
- (void)_bootstrapPipeline:(id)a0 handler:(id /* block */)a1;
- (id)_moduleWithName:(id)a0 pipelineType:(unsigned long long)a1 hyperParameter:(id)a2;
- (double)maxHorizontalAccuracyOverride;
- (void)_processMatureLocations;
- (void)handleVisitIncident:(id)a0;
- (void)_startFeedBuffer;
- (void)stopMonitoringVisitIncidents;
- (id)_createPipelineWithType:(unsigned long long)a0 name:(id)a1 lastVisit:(id)a2;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 distanceCalculator:(id)a2 hintManager:(id)a3 learnedLocationManager:(id)a4 locationAwarenessManager:(id)a5 locationManager:(id)a6 metricManager:(id)a7 motionActivityManager:(id)a8 platform:(id)a9 queue:(id)a10 state:(id)a11 timerManager:(id)a12 visitLabeler:(id)a13;
- (void)_unregisterVisitMonitorForRegionEventsForPipelineType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
