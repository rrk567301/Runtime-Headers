@class _TtC27SiriVirtualDeviceResolution26AssistantEnabledCapability;

@interface SVDAssistantEnabledCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution26AssistantEnabledCapability *_backing;
}

+ (BOOL)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (id)_swiftBacking;
- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0;
- (id)initWithCoder:(id)a0;
- (long long)supportsAssistantEnabled;
- (void)encodeWithCoder:(id)a0;

@end
