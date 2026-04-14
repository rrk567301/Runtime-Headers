@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsRemoteCameraEmbedded : VCVideoRuleCollectionsRemoteCamera {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (id)initWithHardwareSettings:(id)a0;
- (BOOL)initSupportedPayloads;

@end
