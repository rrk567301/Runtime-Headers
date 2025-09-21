@interface _CLLocationPlayer : NSObject

@property (nonatomic, getter=isFusionEnabled) char fusionEnabled;
@property (nonatomic, getter=isSimulationEnabled) char simulationEnabled;

- (void)start;
- (void)stop;
- (void)_updateARSessionState:(unsigned long long)a0;
- (void)_updateVIOEstimation:(id)a0;
- (void)_updateVLLocalizationResult:(id)a0;
- (id)_getFusedLocationFrom:(id)a0 machAbsTime:(double)a1;

@end
