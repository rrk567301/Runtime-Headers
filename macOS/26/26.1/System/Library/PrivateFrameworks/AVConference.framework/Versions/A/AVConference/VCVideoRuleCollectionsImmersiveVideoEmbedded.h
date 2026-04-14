@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsImmersiveVideoEmbedded : VCVideoRuleCollectionsImmersiveVideo {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (BOOL)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;

@end
