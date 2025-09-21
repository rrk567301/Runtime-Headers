@class _TtC27SiriVirtualDeviceResolution17SpeakerCapability;

@interface SVDSpeakerCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution17SpeakerCapability *_backing;
}

+ (char)supportsSecureCoding;
+ (id)newWithBuilder:(id /* block */)a0;
+ (id)capabilityDescriptionMatchingQualityScoreRangeWithLowerBound:(long long)a0 upperBound:(long long)a1;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)qualityScore;
- (id)_swiftBacking;
- (id)initWithStatus:(long long)a0 qualityScore:(long long)a1;
- (long long)supportStatus;

@end
