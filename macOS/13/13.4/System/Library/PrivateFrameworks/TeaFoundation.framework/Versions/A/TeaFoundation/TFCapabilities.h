@interface TFCapabilities : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isTall;
+ (BOOL)hasExtendedColorDisplay;
+ (BOOL)isHardwareKeyboardAttached;

@end
