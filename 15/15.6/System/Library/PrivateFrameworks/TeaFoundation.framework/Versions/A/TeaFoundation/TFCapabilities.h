@interface TFCapabilities : NSObject

+ (char)isInternalBuild;
+ (char)hasExtendedColorDisplay;
+ (char)isHardwareKeyboardAttached;

- (id)init;

@end
