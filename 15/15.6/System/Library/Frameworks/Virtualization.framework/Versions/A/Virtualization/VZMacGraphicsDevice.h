@interface VZMacGraphicsDevice : VZGraphicsDevice {
    long long _deviceFeatureLevel;
    char _prefersLowPower;
}

- (long long)_deviceFeatureLevel;
- (char)_prefersLowPower;

@end
