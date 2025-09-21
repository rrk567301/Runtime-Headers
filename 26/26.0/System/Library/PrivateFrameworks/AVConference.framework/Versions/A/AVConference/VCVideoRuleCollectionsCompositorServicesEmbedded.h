@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsCompositorServicesEmbedded : VCVideoRuleCollectionsCompositorServices {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)dealloc;
- (BOOL)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;

@end
