@interface MGWrapper : NSObject

+ (id)sharedMGWrapper;

- (id)deviceClass;
- (char)isDeviceIPad;
- (char)isDeviceIPhone;

@end
