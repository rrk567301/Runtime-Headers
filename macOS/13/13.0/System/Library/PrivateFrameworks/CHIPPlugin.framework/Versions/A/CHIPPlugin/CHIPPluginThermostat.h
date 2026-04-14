@class NSString;

@interface CHIPPluginThermostat : MTRBaseClusterThermostat <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)readAttributeOccupiedHeatingOrCoolingSetpointWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeCurrentSystemModeWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end
