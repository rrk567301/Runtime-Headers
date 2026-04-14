@interface MRAVAudioOutputDeviceDataSource : MRAVDiscoveryOutputDeviceDataSource

+ (BOOL)compatibleWithConfiguration:(id)a0;

- (id)outputDeviceFromMROutputDevice:(id)a0;
- (id)createConfiguration;
- (id)createOutputContext;
- (BOOL)isOutputDeviceGroupable:(id)a0;

@end
