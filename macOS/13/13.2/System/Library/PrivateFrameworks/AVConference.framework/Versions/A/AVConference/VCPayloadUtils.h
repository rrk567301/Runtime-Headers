@interface VCPayloadUtils : NSObject

+ (BOOL)isUseCaseWatchContinuity:(int)a0 primaryPayload:(int)a1;
+ (BOOL)isPayloadSupportedInFaceTime:(int)a0;
+ (unsigned int)sampleRateForPayload:(int)a0;
+ (unsigned int)sampleRateForCodecBandwidth:(int)a0;
+ (unsigned int)audioCodecTypeForPayload:(int)a0;
+ (unsigned int)codecSamplesPerFrameForPayload:(int)a0 blockSize:(double)a1;
+ (BOOL)canSetBitrateForPayload:(int)a0;
+ (int)codecBandwidthForPayload:(int)a0;
+ (id)codecModesForAMR8kHz;
+ (id)codecModesForAMR16kHz;
+ (id)codecModesForEVS8kHz;
+ (id)codecModesForEVS16kHz;
+ (id)codecModesForEVS32kHz;
+ (id)supportedCodecModesForBandwidth:(int)a0 payload:(int)a1;
+ (id)allowedBitratesForPayload:(int)a0 supportedBitrates:(id)a1 supportedBandwidths:(id)a2;
+ (int)codecRateModeForDesiredANBR:(unsigned int)a0 payload:(int)a1 supportedBitrates:(id)a2 supportedBandwidths:(id)a3;
+ (BOOL)isEVSCodecModeSupported:(int)a0 forBandwidth:(int)a1;
+ (BOOL)isAMRCodecModeSupported:(int)a0 forBandwidth:(int)a1;
+ (BOOL)isCodecModeSupported:(int)a0 forBandwidth:(int)a1 withPayload:(int)a2;
+ (BOOL)shouldUseCookieForPayload:(int)a0;
+ (BOOL)canBundleExternallyForPayload:(int)a0 forBundlingScheme:(int)a1 operatingMode:(int)a2;
+ (unsigned int)internalBundleFactorForPayload:(int)a0;
+ (BOOL)shouldEnablePacketSizeLimitForPayload:(int)a0;
+ (float)qualityForPayload:(int)a0 forBitrate:(unsigned int)a1;
+ (long long)codecTypeForPayload:(int)a0;
+ (int)payloadForCodecType:(long long)a0;
+ (unsigned int)bitrateForCodecType:(long long)a0 mode:(int)a1;
+ (BOOL)supportsCodecRateModesForCodecType:(long long)a0;
+ (BOOL)supportsCodecBandwidthUpdateForCodecType:(long long)a0;
+ (unsigned int)bitrateForAMRCodecMode:(int)a0;
+ (unsigned int)bitrateForAMRWBCodecMode:(int)a0;
+ (unsigned int)bitrateForEVSCodecMode:(int)a0;
+ (int)vcAudioCodecBandwidthForAudioCodecBandwidth:(int)a0;
+ (int)audioCodecBandwidthForVCAudioCodecBandwidth:(int)a0;

@end
