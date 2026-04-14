@interface MRAVPhotoOutputDeviceDataSource : MRAVDiscoveryOutputDeviceDataSource

+ (BOOL)compatibleWithConfiguration:(id)a0;

- (id)createConfiguration;
- (id)createOutputContext;

@end
