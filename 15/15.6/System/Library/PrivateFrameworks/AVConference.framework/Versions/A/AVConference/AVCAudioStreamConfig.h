@class AVCMediaStreamConfigRemoteDeviceInfo;

@interface AVCAudioStreamConfig : NSObject {
    unsigned long long channelCount;
}

@property (nonatomic) long long audioStreamMode;
@property (nonatomic) long long codecType;
@property (nonatomic, getter=isCNEnabled) char cnEnabled;
@property (nonatomic) unsigned long long cnPayloadType;
@property (nonatomic) unsigned long long dtmfPayloadType;
@property (nonatomic) unsigned long long dtmfTimestampRate;
@property (nonatomic) unsigned long long ptime;
@property (nonatomic) unsigned long long maxPtime;
@property (nonatomic) float volume;
@property (nonatomic) unsigned long long channelAwareOffset;
@property (nonatomic, getter=isOctectAligned) char octetAligned;
@property (nonatomic, getter=isHeaderFullOnly) char headerFullOnly;
@property (nonatomic, getter=isDTXEnabled) char dtxEnabled;
@property (nonatomic) long long preferredCodecRateMode;
@property (nonatomic) unsigned int codecRateModeMask;
@property (nonatomic) unsigned int codecBandwidthMask;
@property (nonatomic, getter=isLatencySensitiveMode) char latencySensitiveMode;
@property (nonatomic) char enableMaxBitrateOnNoChangeCMR;
@property (nonatomic) char dtmfTonePlaybackEnabled;
@property (nonatomic) char dtmfEventCallbacksEnabled;
@property (nonatomic) unsigned long long numRedundantPayloads;
@property (nonatomic) unsigned long long txRedPayloadType;
@property (nonatomic) unsigned long long rxRedPayloadType;
@property (nonatomic) char anbrEnabled;
@property (nonatomic) long long subscriptionSlot;
@property (nonatomic) unsigned long long channelCount;
@property (nonatomic) unsigned long long preferredMediaBitRate;
@property (nonatomic) int codecCMRMode;
@property (readonly, nonatomic) AVCMediaStreamConfigRemoteDeviceInfo *remoteDeviceInfo;

+ (long long)clientStreamModeWithStreamMode:(long long)a0;
+ (long long)streamModeWithClientStreamMode:(long long)a0;
+ (unsigned int)clientCodecBandwidthMaskForCodecBandwidth:(unsigned int)a0;
+ (int)clientCodecCMRModeModeWithEVSCMRMode:(int)a0;
+ (unsigned int)clientCodecRateMaskForCodecRateMode:(unsigned int)a0;
+ (long long)clientCodecRateModeForCodecRateMode:(int)a0;
+ (long long)clientCodecTypeWithCodecType:(long long)a0;
+ (unsigned int)codecBandwidthMaskForClientCodecBandwidth:(unsigned int)a0;
+ (unsigned int)codecRateMaskForClientCodecRateMode:(unsigned int)a0;
+ (int)codecRateModeForClientCodecRateMode:(long long)a0;
+ (long long)codecTypeWithClientCodecType:(long long)a0;
+ (int)evsCMRModeForClientCodecCMRMode:(int)a0;

- (void)dealloc;
- (id)init;
- (char)isValid;
- (id)dictionary;
- (char)isCNValid;
- (char)isChannelCountValid;
- (char)isDTMFValid;
- (char)isRedValid;
- (void)setUpWithDictionary:(id)a0;

@end
