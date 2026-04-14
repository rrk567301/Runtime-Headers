@class _TtC27SiriVirtualDeviceResolution24SeymourRoutingCapability;

@interface SVDSeymourRoutingCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution24SeymourRoutingCapability *_backing;
}

+ (BOOL)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (id)_swiftBacking;
- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)supportsSeymourRouting;

@end
