@interface AppleIRDeviceClient : CoreIRDeviceClient

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (BOOL)pairAppleRemote:(id *)a0;
- (BOOL)unpairAppleRemote:(id *)a0;
- (BOOL)isAppleRemote;

@end
