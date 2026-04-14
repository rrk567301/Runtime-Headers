@class DatabaseController;

@interface HardwarePolicyMaker : NSObject {
    DatabaseController *_databaseController;
}

- (void).cxx_destruct;
- (void)getDeviceConfigurations:(void *)a0 fromActivationRequest:(id)a1;
- (void)getDeviceConfigurations:(void *)a0 fromConfigurationRequest:(id)a1;
- (id)initWithDatabaseController:(id)a0;
- (struct vector<dspd::DeviceConfiguration, std::allocator<dspd::DeviceConfiguration>> { struct DeviceConfiguration *x0; struct DeviceConfiguration *x1; struct __compressed_pair<dspd::DeviceConfiguration *, std::allocator<dspd::DeviceConfiguration>> { struct DeviceConfiguration *x0; } x2; })getDeviceConfigurations:(const void *)a0;
- (struct expected<std::vector<dspd::PublicFormatMap>, std::error_code> { union storage<std::vector<dspd::PublicFormatMap>, std::error_code> { char x0; struct vector<dspd::PublicFormatMap, std::allocator<dspd::PublicFormatMap>> { struct PublicFormatMap *x0; struct PublicFormatMap *x1; struct __compressed_pair<dspd::PublicFormatMap *, std::allocator<dspd::PublicFormatMap>> { struct PublicFormatMap *x0; } x2; } x1; struct error_code { int x0; struct error_category *x1; } x2; } x0; BOOL x1; })getSupportedPublicStreamFormats:(id)a0;

@end
