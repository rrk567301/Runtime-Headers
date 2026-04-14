@interface AXMDeviceInfo : NSObject

+ (id)sharedInstance;

- (id)_init;
- (id)systemReport;
- (id)privilegedSystemReport;

@end
