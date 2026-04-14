@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsMomentsEmbeded : VCVideoRuleCollectionsMoments {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (id)initWithHardwareSettings:(id)a0;
- (unsigned char)getMomentsCapabilities;
- (id)getMomentsImageTypes;
- (id)getMomentsVideoCodecs;
- (BOOL)isSupportedDeviceClass;
- (BOOL)isSupportedChipID;

@end
