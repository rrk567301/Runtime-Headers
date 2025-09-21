@class _TtC27SiriVirtualDeviceResolution35AlarmTimerIntentsHandlingCapability;

@interface SVDAlarmTimerIntentsHandlingCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution35AlarmTimerIntentsHandlingCapability *_backing;
}

+ (char)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0;
- (id)_swiftBacking;
- (long long)supportsAlarmTimerIntentsHandling;

@end
