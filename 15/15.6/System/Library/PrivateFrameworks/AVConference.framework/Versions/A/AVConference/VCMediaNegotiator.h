@class VCMediaNegotiatorResultsCaptions;

@interface VCMediaNegotiator : VCMediaNegotiatorBase {
    char _negotiationDone;
}

@property (readonly, nonatomic) long long negotiationMode;
@property (readonly, nonatomic) char isCaller;
@property (readonly, nonatomic) char usePreNegotiation;
@property (readonly, nonatomic) VCMediaNegotiatorResultsCaptions *negotiatedCaptionsSettings;
@property (readonly, nonatomic) char isCellular16x9Capable;

+ (char)addMediaConfigurationsToLocalConfiguration:(id)a0 withBlob:(id)a1;
+ (void)dumpBlob:(id)a0 prefix:(id)a1 force:(char)a2;
+ (char)initializeLocalConfiguration:(id)a0 negotiationData:(id)a1 deviceRole:(int)a2 preferredAudioPayload:(int)a3;
+ (id)localConfigurationWithData:(id)a0 deviceRole:(int)a1 preferredAudioPayload:(int)a2;
+ (unsigned int)mappedRemoteQualityIndexForQualityIndex:(unsigned int)a0;
+ (id)negotiatedFeaturesStringWithLocalFeaturesString:(id)a0 remoteFeaturesString:(id)a1;
+ (id)negotiationBlobFromData:(id)a0;
+ (id)newCompressedBlob:(id)a0;
+ (id)newDecompressedBlob:(id)a0;
+ (id)streamGroupIDsWithMediaBlob:(id)a0;
+ (char)validateLocalConfiguration:(id)a0;
+ (char)validateMultiwayAudioStreamConfigurations:(id)a0;
+ (char)validateMultiwayVideoStreamConfigurations:(id)a0;

- (void)dealloc;
- (id)newResponseBlob;
- (id)negotiationData;
- (char)addBandwidthSettingsForMediaBlob:(id)a0 arbiterMode:(unsigned char)a1 connectionType:(int)a2 maxBitrate:(unsigned int)a3;
- (id)getPreferredScreenPayloadList;
- (id)initWithLocalSettings:(id)a0;
- (id)initWithMode:(long long)a0 localSettings:(id)a1;
- (char)isCellular16x9EncodeCapable;
- (char)isNegotiationModeForScreenShare:(long long)a0;
- (char)isNegotiationModeValid:(long long)a0;
- (char)isVideoStreamSupported:(int)a0;
- (id)localeWithMediaBlobLanguage:(int)a0;
- (int)mediaBlobLanguageWithLocale:(id)a0;
- (void)negotiateAudioAllowRecording:(id)a0 microphoneConfiguration:(id)a1;
- (char)negotiateAudioDTXPayload:(id)a0;
- (char)negotiateAudioPrimaryPayload:(id)a0 microphoneConfiguration:(id)a1;
- (char)negotiateAudioREDPayload:(id)a0 microphoneConfiguration:(id)a1;
- (void)negotiateAudioSecondaryPayloads:(id)a0 microphoneConfiguration:(id)a1;
- (char)negotiateAudioSettings:(id)a0;
- (void)negotiateAudioUseSBR:(id)a0;
- (char)negotiateCaptionsWithCaptionsSettings:(id)a0;
- (char)negotiateFaceTimeSettings:(id)a0;
- (char)negotiateHDRMode:(id)a0 videoResults:(id)a1;
- (char)negotiateMomentsWithMomentsSettings:(id)a0;
- (char)negotiateMultiwayAudioStreams:(id)a0;
- (char)negotiateMultiwayVideoStreams:(id)a0;
- (void)negotiateRTCPFB:(id)a0 negotiatedVideoSettings:(id)a1;
- (char)negotiateScreenSettings:(id)a0;
- (void)negotiateTilesPerFrame:(id)a0 negotiatedSettings:(id)a1;
- (char)negotiateVideoSettings:(id)a0;
- (id)newStreamConfigFromMultiwayAudioStream:(id)a0;
- (id)newStreamConfigFromMultiwayVideoStream:(id)a0;
- (id)newStreamGroupCodecConfigForPayload:(int)a0;
- (char)processParameterSets:(id)a0 videoResults:(id)a1;
- (char)processPixelFormats:(id)a0 videoResults:(id)a1;
- (char)processRemoteNegotiationData:(id)a0;
- (char)processResponseBlob:(id)a0;
- (unsigned int)remoteMaxBandwidthForArbiterMode:(unsigned char)a0 connectionType:(int)a1;
- (void)saveRemoteBandwidthSettingsWithMediaBlob:(id)a0;
- (char)selectBestScreenRule:(id)a0 preferredPayloadOrder:(id)a1;
- (char)selectBestVideoRuleForTransport:(unsigned char)a0 payload:(int)a1 encodingType:(unsigned char)a2 localVideoRuleCollection:(id)a3 remoteVideoSettings:(id)a4 negotiatedVideoSettings:(id)a5 isScreen:(char)a6;
- (id)selectVideoFeatureString:(id)a0 selectedPayload:(int)a1 videoConfiguration:(id)a2;
- (char)setupAudioWithNegotiatedSettings:(id)a0;
- (char)setupBandwidthSettingsForMediaBlob:(id)a0;
- (void)setupCaptionsForMediaBlob:(id)a0;
- (void)setupFaceTimeSettingsForMediaBlob:(id)a0 isResponse:(char)a1;
- (void)setupMomentsForMediaBlob:(id)a0;
- (void)setupMultiwayAudioStreamsForMediaBlob:(id)a0;
- (void)setupMultiwayVideoStreamsForMediaBlob:(id)a0;
- (char)setupScreenWithNegotiatedSettings:(id)a0;
- (char)setupVideoWithNegotiatedSettings:(id)a0;

@end
