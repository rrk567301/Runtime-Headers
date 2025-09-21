@class ATXMotionManagerWrapper, ATXAmbientLightMonitor, ATXLocationManager, ATXBiomePredictionContextStream, _ATXAppInfoManager;

@interface ATXContextSourcesGuardedData : NSObject

@property (readonly, nonatomic) _ATXAppInfoManager *appInfoManager;
@property (readonly, nonatomic) ATXLocationManager *locationManager;
@property (readonly, nonatomic) ATXMotionManagerWrapper *motionManagerWrapper;
@property (readonly, nonatomic) ATXAmbientLightMonitor *ambientLightMonitor;
@property (readonly, nonatomic) Class deviceStateMonitorClass;
@property (readonly, nonatomic) char contextSourcesInitialized;
@property (readonly, nonatomic) ATXBiomePredictionContextStream *predictionContextStream;
@property (readonly, nonatomic) char biomeStreamsInitialized;

- (void).cxx_destruct;
- (void)updateAppInfoManager:(id)a0 locationManager:(id)a1 motionManagerWrapper:(id)a2 ambientLightMonitor:(id)a3 deviceStateMonitorClass:(Class)a4 contextSourcesInitialized:(char)a5;
- (void)updatePredictionContextStream:(id)a0 biomeStreamsInitialized:(char)a1;

@end
