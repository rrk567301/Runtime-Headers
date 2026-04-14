@class NSString;

@interface HMMTRColorControl : MTRBaseClusterColorControl <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithQueue:(id)a0;
- (void)readStartUpColorTemperatureWithCompletion:(id /* block */)a0;
- (void)writeStartUpColorTemperature:(id)a0 completion:(id /* block */)a1;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (void)readAttributePluginColorTemperatureMiredsWithCompletionHandler:(id /* block */)a0;
- (void)moveToCustomColorTemperatureValue:(id)a0 fromColorTemperature:(id)a1 transitionTime:(id)a2 completionHandler:(id /* block */)a3;
- (void)moveToCustomColorTemperatureWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveToPluginColorTemperatureWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readColorTemperatureAttributesWithCompletion:(id /* block */)a0 queue:(id)a1;
- (void)stopMoveToColorTemperatureCommandWithCompletion:(id /* block */)a0;
- (void)subscribeAttributeReportForColorModeWithCompletion:(id /* block */)a0;
- (void)supportsColorTemperature:(id /* block */)a0;

@end
