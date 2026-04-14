@interface TFCapabilities : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isHardwareKeyboardAttached;
+ (BOOL)hasExtendedColorDisplay;

- (id)init;

@end
