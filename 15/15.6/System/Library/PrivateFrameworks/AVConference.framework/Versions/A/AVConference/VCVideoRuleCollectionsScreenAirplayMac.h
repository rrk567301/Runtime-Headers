@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsScreenAirplayMac : VCVideoRuleCollectionsScreenAirplay {
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;
- (char)setupH264Rules;
- (char)setupHEVCRules;
- (char)setupRules;

@end
