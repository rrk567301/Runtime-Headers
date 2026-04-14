@class _TtC27SiriVirtualDeviceResolution17SpeakerCapability;

@interface SVDSpeakerCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution17SpeakerCapability *_backing;
}

+ (BOOL)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;
+ (id)newWithBuilder:(id /* block */)a0;
+ (id)capabilityDescriptionMatchingQualityScoreRangeWithLowerBound:(long long)a0 upperBound:(long long)a1;

- (id)_swiftBacking;
- (long long)qualityScore;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 qualityScore:(long long)a1;
- (long long)supportStatus;

@end
