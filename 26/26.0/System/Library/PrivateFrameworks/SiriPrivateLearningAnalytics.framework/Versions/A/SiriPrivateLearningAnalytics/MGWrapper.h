@interface MGWrapper : NSObject

+ (id)sharedMGWrapper;

- (id)deviceClass;
- (BOOL)isDeviceIPhone;
- (BOOL)isDeviceIPad;

@end
