@interface AppleIRDeviceClient : CoreIRDeviceClient

+ (char)supportsSecureCoding;

- (Class)classForCoder;
- (char)isAppleRemote;
- (char)pairAppleRemote:(id *)a0;
- (char)unpairAppleRemote:(id *)a0;

@end
