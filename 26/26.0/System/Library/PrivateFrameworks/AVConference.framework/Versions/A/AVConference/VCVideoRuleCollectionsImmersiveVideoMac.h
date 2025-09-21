@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsImmersiveVideoMac : VCVideoRuleCollectionsImmersiveVideo {
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (BOOL)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;

@end
