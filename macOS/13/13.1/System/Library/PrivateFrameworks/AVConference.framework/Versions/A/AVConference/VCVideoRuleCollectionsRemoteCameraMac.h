@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsRemoteCameraMac : VCVideoRuleCollectionsRemoteCamera {
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (id)initWithHardwareSettings:(id)a0;
- (BOOL)initSupportedPayloads;

@end
