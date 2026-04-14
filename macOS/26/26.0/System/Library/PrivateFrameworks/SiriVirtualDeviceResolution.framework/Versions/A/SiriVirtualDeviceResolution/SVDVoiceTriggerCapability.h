@class _TtC27SiriVirtualDeviceResolution22VoiceTriggerCapability;

@interface SVDVoiceTriggerCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution22VoiceTriggerCapability *_backing;
}

+ (BOOL)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (id)_swiftBacking;
- (long long)supportsVoiceTrigger;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
