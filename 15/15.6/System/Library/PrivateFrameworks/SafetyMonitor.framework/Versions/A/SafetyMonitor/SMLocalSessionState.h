@interface SMLocalSessionState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char unsupportedDeviceSeparationState;
@property (nonatomic) char userDisabledConnectivity;
@property (nonatomic) char separatedLPMConnectivityWarningState;

+ (long long)convertBoolToSMDeviceConfigurationLowPowerModeWarningState:(char)a0;
+ (char)convertSMDeviceConfigurationLPMToBool:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUnsupportedDeviceSeparationState:(char)a0 userDisabledConnectivity:(char)a1 separatedLPMConnectivityWarningState:(char)a2;

@end
