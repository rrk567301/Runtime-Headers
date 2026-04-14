@class NSString, UARPDeviceConfiguration;

@interface UARPDeviceComponentConfiguration : NSObject

@property (readonly) NSString *componentTag;
@property (readonly) UARPDeviceConfiguration *config;

- (void).cxx_destruct;
- (id)initWithComponentTag:(id)a0;

@end
