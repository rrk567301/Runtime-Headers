@class NSDictionary;

@interface BRDeviceConfiguration : NSObject

@property (readonly, nonatomic) NSDictionary *configuration;

- (void).cxx_destruct;
- (id)getDeviceConfigurationString;
- (id)initForTestingDevice:(BOOL)a0;

@end
