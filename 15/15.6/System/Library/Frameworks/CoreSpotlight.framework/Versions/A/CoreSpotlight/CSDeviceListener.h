@interface CSDeviceListener : NSObject

@property (readonly, nonatomic) char onBattery;

+ (id)sharedListener;

- (id)init;

@end
