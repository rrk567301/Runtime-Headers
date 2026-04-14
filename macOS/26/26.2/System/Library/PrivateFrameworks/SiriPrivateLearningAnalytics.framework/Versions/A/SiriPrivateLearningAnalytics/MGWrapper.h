@interface MGWrapper : NSObject

+ (id)sharedMGWrapper;

- (BOOL)isDeviceIPad;
- (BOOL)isDeviceIPhone;
- (id)deviceClass;

@end
