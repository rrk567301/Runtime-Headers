@class _TtC27SiriVirtualDeviceResolution23AudioPlaybackCapability;

@interface SVDAudioPlaybackCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution23AudioPlaybackCapability *_backing;
}

+ (char)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0;
- (long long)supportsAudioPlayback;
- (id)_swiftBacking;

@end
