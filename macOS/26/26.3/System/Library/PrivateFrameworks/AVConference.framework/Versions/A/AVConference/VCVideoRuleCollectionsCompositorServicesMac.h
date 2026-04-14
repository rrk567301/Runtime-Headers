@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsCompositorServicesMac : VCVideoRuleCollectionsCompositorServices {
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)dealloc;
- (BOOL)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;

@end
