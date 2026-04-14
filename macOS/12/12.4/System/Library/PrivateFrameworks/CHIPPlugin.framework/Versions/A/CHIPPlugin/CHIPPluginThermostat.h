@interface CHIPPluginThermostat : CHIPThermostat

- (void)writeAttributeOccupiedHeatingOrCoolingSetpointWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeOccupiedHeatingOrCoolingSetpointWithCompletionHandler:(id /* block */)a0;
- (void)updatedValueForAttributeReport:(id)a0 responseHandler:(id /* block */)a1;

@end
