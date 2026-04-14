@class NSString;

@interface CHIPPluginSyncClusterThermostat : MTRClusterThermostat <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)updatedValueForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;
- (void)updatedValuePluginCurrentHeatingCoolingStateForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;
- (void)writeAttributeOccupiedHeatingOrCoolingSetpointWithValue:(id)a0 expectedValueInterval:(id)a1;
- (id)readAttributeOccupiedHeatingOrCoolingSetpointWithParams:(id)a0;
- (id)readAttributePluginCurrentHeatingCoolingStateWithParams:(id)a0;

@end
