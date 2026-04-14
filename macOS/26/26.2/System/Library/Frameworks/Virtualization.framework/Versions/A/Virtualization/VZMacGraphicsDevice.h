@interface VZMacGraphicsDevice : VZGraphicsDevice {
    long long _deviceFeatureLevel;
    BOOL _prefersLowPower;
}

- (long long)_deviceFeatureLevel;
- (BOOL)_prefersLowPower;
- (BOOL)_validateDisplayForHotPlug:(id)a0 error:(id *)a1;

@end
