@interface TFCapabilities : NSObject

+ (BOOL)isHardwareKeyboardAttached;
+ (BOOL)isInternalBuild;
+ (BOOL)hasExtendedColorDisplay;

- (id)init;

@end
