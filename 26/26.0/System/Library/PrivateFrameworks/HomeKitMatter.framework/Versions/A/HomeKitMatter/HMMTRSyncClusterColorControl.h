@class NSString;

@interface HMMTRSyncClusterColorControl : MTRClusterColorControl <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithQueue:(id)a0;
- (id)logIdentifier;
- (void)moveToCustomColorTemperatureValue:(id)a0 transitionTime:(id)a1 completionHandler:(id /* block */)a2;
- (void)readColorModeAndColorTemperatureWithCompletion:(id /* block */)a0;
- (void)readColorTemperatureAttributesWithCompletion:(id /* block */)a0;
- (void)readStartUpColorTemperatureWithCompletion:(id /* block */)a0;
- (void)stopMoveToColorTemperatureCommandWithCompletion:(id /* block */)a0;
- (void)supportsColorTemperatureRangeWithMinColorTemperature:(id)a0 maxColorTemperature:(id)a1 completion:(id /* block */)a2;
- (void)writeStartUpColorTemperature:(id)a0 completion:(id /* block */)a1;
- (void)moveToCustomColorTemperatureWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveToPluginColorTemperatureWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)readAttributePluginColorTemperatureMiredsWithParams:(id)a0;

@end
