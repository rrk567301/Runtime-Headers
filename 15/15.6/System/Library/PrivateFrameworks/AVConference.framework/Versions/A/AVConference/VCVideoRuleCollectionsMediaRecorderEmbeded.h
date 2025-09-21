@protocol VCHardwareSettingsEmbeddedProtocol;

@interface VCVideoRuleCollectionsMediaRecorderEmbeded : VCVideoRuleCollectionsMediaRecorder {
    id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;

- (char)isSupportedDeviceClass;
- (id)initWithHardwareSettings:(id)a0;
- (char)isSupportedChipID;
- (unsigned char)mediaRecorderCapabilities;
- (id)mediaRecorderImageTypes;
- (id)mediaRecorderVideoCodecs;

@end
