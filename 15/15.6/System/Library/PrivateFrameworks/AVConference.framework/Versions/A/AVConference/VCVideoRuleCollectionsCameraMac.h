@protocol VCHardwareSettingsMacProtocol;

@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera {
    unsigned int _encodeScore;
    unsigned int _decodeScore;
    id<VCHardwareSettingsMacProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (void)dealloc;
- (double)preferredAspectRatio;
- (void)_addWVGAEncodingRules;
- (void)_removeRulesGreaterThan720p;
- (void)_removeRulesGreaterThanVGA;
- (void)_resetJ92EncodingRulesForCameraIsHD:(char)a0 isWVGA:(char)a1 is1080:(char)a2;
- (void)computeDecodingScore;
- (void)computeEncodingScore;
- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)a0;
- (void)resetEncodingRulesForCameraIsHD:(char)a0 isWVGA:(char)a1 is1080:(char)a2;
- (char)setUp1080pRules:(int)a0;
- (char)setupH264Rules;
- (char)setupH264WifiRules;
- (char)setupHEVCRules;
- (char)setupRules;
- (char)useSoftFramerateSwitching;

@end
