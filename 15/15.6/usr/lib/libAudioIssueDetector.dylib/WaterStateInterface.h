@interface WaterStateInterface : NSObject

+ (id)sharedInstance;

- (void)disconnect;
- (void)connect;
- (char)isWaterStateON;

@end
