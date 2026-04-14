@class NSString;

@interface CHIPPluginThermostat : CHIPThermostat <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)writeAttributeOccupiedHeatingOrCoolingSetpointWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeOccupiedHeatingOrCoolingSetpointWithCompletionHandler:(id /* block */)a0;
- (void)updatedValueForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;

@end
