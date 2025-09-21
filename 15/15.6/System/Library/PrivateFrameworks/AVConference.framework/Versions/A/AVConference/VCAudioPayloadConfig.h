@class NSArray, NSString;

@interface VCAudioPayloadConfig : NSObject {
    unsigned int _codecSamplesPerFrame;
    char _useSBR;
    NSString *_description;
}

@property (readonly, nonatomic) int payload;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned int samplesPerFrame;
@property (readonly, nonatomic) unsigned int codecSampleRate;
@property (readonly, nonatomic) unsigned int bitrate;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) unsigned int internalBundleFactor;
@property (readonly, nonatomic) char payloadOctetAligned;
@property (readonly, nonatomic) char forcingBitrate;
@property (readonly, nonatomic) NSArray *supportedBitrates;
@property (readonly, nonatomic) NSArray *supportedBandwidths;
@property (readonly, nonatomic) unsigned int inputSampleRate;
@property (readonly, nonatomic) char isDTXEnabled;
@property (readonly, nonatomic) unsigned int evsSIDPeriod;
@property (readonly, nonatomic) unsigned int blockSize;
@property (readonly, nonatomic) unsigned int bundleHeaderBytes;
@property (readonly, nonatomic) unsigned short evsChannelAwareOffset;
@property (readonly, nonatomic) unsigned short evsChannelAwareIndicator;
@property (readonly, nonatomic) char evsHeaderFullOnly;
@property (nonatomic) int evsCMRMode;
@property (readonly, nonatomic) char isOpusInBandFecEnabled;

- (void)dealloc;
- (id)description;
- (id)className;
- (char)configure:(id)a0;
- (void)createSupportedBitratesForAMR8k;
- (unsigned int)aacBitrate;
- (void)createSupportedBitrates;
- (void)createSupportedBitratesForAACELD;
- (void)createSupportedBitratesForAACELD48;
- (void)createSupportedBitratesForAMR16k;
- (void)createSupportedBitratesForEVS;
- (void)createSupportedBitratesForOpus;
- (id)initWithConfigDict:(id)a0;
- (float)qualityForBitRate:(unsigned int)a0;
- (void)setUseSBR:(char)a0;
- (void)setupEncodeProperties:(id)a0;
- (void)updateDescription;

@end
