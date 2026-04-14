@class _TtC27SiriVirtualDeviceResolution35AlarmTimerIntentsHandlingCapability;

@interface SVDAlarmTimerIntentsHandlingCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution35AlarmTimerIntentsHandlingCapability *_backing;
}

+ (BOOL)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (id)initWithStatus:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_swiftBacking;
- (void).cxx_destruct;
- (long long)supportsAlarmTimerIntentsHandling;

@end
