@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsScreen : VCVideoRuleCollections {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (id)initWithHardwareSettings:(id)a0;
- (void)initSupportedPayloads;
- (BOOL)setupH264Rules;
- (void)selectPreferredRule:(id)a0 screenSize:(struct CGSize { double x0; double x1; })a1;
- (id)initForMacDecodingOnly;
- (BOOL)setupMacDecodingOnlyRules;

@end
