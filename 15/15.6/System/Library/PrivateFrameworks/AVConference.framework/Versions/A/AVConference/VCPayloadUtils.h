@interface VCPayloadUtils : NSObject

+ (unsigned int)internalBundleFactorForPayload:(int)a0;
+ (double)blockSizeForPayload:(int)a0 sampleRate:(unsigned int)a1;
+ (id)allowedBitratesForPayload:(int)a0 supportedBitrates:(id)a1 supportedBandwidths:(id)a2;
+ (int)audioCodecBandwidthForVCAudioCodecBandwidth:(int)a0;
+ (unsigned int)audioCodecTypeForPayload:(int)a0;
+ (unsigned int)bitrateForAMRCodecMode:(int)a0;
+ (unsigned int)bitrateForAMRWBCodecMode:(int)a0;
+ (unsigned int)bitrateForCodecType:(long long)a0 mode:(int)a1;
+ (unsigned int)bitrateForEVSCodecMode:(int)a0;
+ (char)canBundleExternallyForPayload:(int)a0 forBundlingScheme:(int)a1 operatingMode:(int)a2;
+ (char)canSetBitrateForPayload:(int)a0;
+ (int)codecBandwidthForPayload:(int)a0;
+ (id)codecModesForAMR16kHz;
+ (id)codecModesForAMR8kHz;
+ (id)codecModesForEVS16kHz;
+ (id)codecModesForEVS32kHz;
+ (id)codecModesForEVS8kHz;
+ (int)codecRateModeForDesiredANBR:(unsigned int)a0 payload:(int)a1 supportedBitrates:(id)a2 supportedBandwidths:(id)a3;
+ (unsigned int)codecSamplesPerFrameForPayload:(int)a0 blockSize:(double)a1;
+ (unsigned int)codecSamplesPerFrameForPayload:(int)a0 blockSize:(double)a1 sampleRate:(unsigned int)a2;
+ (long long)codecTypeForPayload:(int)a0;
+ (char)isAMRCodecModeSupported:(int)a0 forBandwidth:(int)a1;
+ (char)isCodecModeSupported:(int)a0 forBandwidth:(int)a1 withPayload:(int)a2;
+ (char)isEVSCodecModeSupported:(int)a0 forBandwidth:(int)a1;
+ (char)isEVSPayload:(int)a0;
+ (char)isFormatAACELDNonSBR48KHzStereo:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
+ (char)isOpus4Channel48KhzPayload:(int)a0 outFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1;
+ (char)isPayloadSupportedInFaceTime:(int)a0;
+ (char)isUseCaseWatchContinuity:(int)a0 primaryPayload:(int)a1;
+ (double)opusSamplesPerFrameForSampleRate:(unsigned int)a0 blockSize:(double)a1;
+ (int)payloadForCodecType:(long long)a0;
+ (float)qualityForPayload:(int)a0 forBitrate:(unsigned int)a1;
+ (unsigned int)sampleRateForCodecBandwidth:(int)a0;
+ (unsigned int)sampleRateForPayload:(int)a0;
+ (char)shouldEnablePacketSizeLimitForAudioFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
+ (char)shouldUseCookieForPayload:(int)a0;
+ (char)skipBandWidthCheckForCodecRateModes:(int)a0 supportedBitrates:(id)a1;
+ (id)supportedCodecModesForBandwidth:(int)a0 payload:(int)a1;
+ (char)supportsCodecBandwidthUpdateForCodecType:(long long)a0;
+ (char)supportsCodecRateModesForCodecType:(long long)a0;
+ (int)vcAudioCodecBandwidthForAudioCodecBandwidth:(int)a0;

@end
