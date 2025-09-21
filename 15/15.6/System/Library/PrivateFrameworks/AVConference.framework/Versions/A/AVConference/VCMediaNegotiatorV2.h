@interface VCMediaNegotiatorV2 : VCMediaNegotiatorBase

+ (char)addV2FeatureListStringsToStreamGroupConfig:(id)a0 fromStreamGroupBlob:(id)a1;
+ (unsigned int)capabilitiesWithMomentSettings:(id)a0;
+ (struct CGSize { double x0; double x1; })resolutionForStreamGroupConfig:(id)a0;
+ (char)addFeatureListStringsToStreamGroupConfig:(id)a0 fromStreamGroupBlob:(id)a1;
+ (char)addV1FeatureListStringsToStreamGroupConfig:(id)a0 mediaType:(unsigned char)a1;
+ (void)dumpRemoteNegotiationData:(id)a0 forceFileDump:(char)a1;
+ (id)featureStringWithMediaBlob:(id)a0;
+ (int)filteredCipherSuitesFromNegotiatedCipherSuites:(int)a0 u1AuthTagEnabled:(char)a1;
+ (float)frameRateForMediaType:(unsigned char)a0;
+ (char)initializeLocalConfiguration:(id)a0 negotiationData:(id)a1 deviceRole:(int)a2 preferredAudioPayload:(int)a3;
+ (id)newCompressedBlob:(id)a0;
+ (id)newDecompressedBlob:(id)a0;
+ (id)newUnserializedMediaBlob:(id)a0;
+ (id)streamGroupIDsWithMediaBlob:(id)a0;
+ (id)u1RemoteSupportedCipherSuitesForBlob:(id)a0 mediaType:(unsigned char)a1 u1AuthTagEnabled:(char)a2;
+ (char)updateCameraU1Config:(id)a0 forNegotiationBlob:(id)a1 localSupportedVideoPayloads:(id)a2 u1AuthTagEnabled:(char)a3;
+ (char)updateStreamGroupU1Config:(id)a0 forGroupId:(unsigned int)a1 withNegotiationBlob:(id)a2 streamGroupBlob:(id)a3 localSupportedVideoPayloads:(id)a4 u1AuthTagEnabled:(char)a5;
+ (char)updateVideoU1ConfigWithStreamGroupConfig:(id)a0 forNegotiationBlob:(id)a1 streamGroupBlob:(id)a2 localSupportedVideoPayloads:(id)a3 u1AuthTagEnabled:(char)a4;

- (char)appendCodecFeaturesToMediaBlob:(id)a0;
- (id)negotiationData;
- (char)appendBandwidthSettingsToMediaBlob:(id)a0;
- (char)appendCameraOneToOneSettingsToMediaBlob:(id)a0;
- (char)appendGeneralInfoToMediaBlob:(id)a0;
- (char)appendMicrophoneOneToOneSettingsToMediaBlob:(id)a0;
- (char)appendMomentsSettingsToMediaBlob:(id)a0;
- (char)appendStreamGroupsToMediaBlob:(id)a0;
- (char)mediaBlobHasFLSPerCodec:(id)a0;
- (char)negotiateStreamGroupConfig:(id)a0 remoteInviteBlob:(id)a1;
- (char)negotiateU1SettingsForStreamGroup:(id)a0;
- (char)processRemoteNegotiationData:(id)a0;
- (unsigned int)remoteMaxBandwidthForArbiterMode:(unsigned char)a0 connectionType:(int)a1;
- (char)selectBestDecodeVideoRuleForTransport:(unsigned char)a0 payload:(int)a1 localVideoRuleCollection:(id)a2 remoteVideoRuleCollection:(id)a3;
- (void)setUpNegotiatedSystemAudioResultsWithRemoteMediaBlob:(id)a0;
- (void)setupNegotiatedAudioResultsWithRemoteMediaBlob:(id)a0;
- (void)setupNegotiatedFaceTimeSettingsWithRemoteMediaBlob:(id)a0;
- (char)setupNegotiatedMomentsResultsWithRemoteMediaBlob:(id)a0;
- (char)setupNegotiatedResultsWithRemoteMediaBlob:(id)a0;
- (char)setupNegotiatedVideoSettingsWithRemoteMediaBlob:(id)a0;
- (char)setupStreamGroupsWithRemoteMediaBlob:(id)a0;

@end
