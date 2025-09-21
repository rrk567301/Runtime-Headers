@interface AppleDeviceQuerySingletonArmory : NSObject

+ (id)sharedInstance;
+ (char)accessInstanceVariablesDirectly;

- (void)initData;

@end
