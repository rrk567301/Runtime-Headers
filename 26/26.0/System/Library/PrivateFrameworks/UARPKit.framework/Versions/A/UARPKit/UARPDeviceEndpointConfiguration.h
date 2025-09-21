@class UARPDeviceConfiguration, NSMutableArray;

@interface UARPDeviceEndpointConfiguration : NSObject {
    NSMutableArray *_components;
}

@property (readonly) unsigned long long endpointID;
@property (readonly) UARPDeviceConfiguration *config;

- (id)components;
- (void).cxx_destruct;
- (id)initWithEndpointID:(unsigned long long)a0;
- (void)addEndpointConfiguration:(id)a0;

@end
