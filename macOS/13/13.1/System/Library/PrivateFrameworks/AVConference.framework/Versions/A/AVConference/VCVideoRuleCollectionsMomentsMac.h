@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsMomentsMac : VCVideoRuleCollectionsMoments {
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (id)initWithHardwareSettings:(id)a0;
- (unsigned char)getMomentsCapabilities;
- (id)getMomentsImageTypes;
- (id)getMomentsVideoCodecs;

@end
