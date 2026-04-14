@class NSString, MRContentItemMetadataAudioFormat;

@interface MPNowPlayingInfoAudioFormat : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MRContentItemMetadataAudioFormat *mediaRemoteAudioFormat;
@property (nonatomic) long long tier;
@property (nonatomic) long long bitrate;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long bitDepth;
@property (nonatomic) unsigned int codec;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *stableVariantID;
@property (nonatomic, getter=isSpatialized) BOOL spatialized;
@property (nonatomic, getter=isMultiChannel) BOOL multiChannel;
@property (nonatomic) long long renderingMode;
@property (nonatomic) unsigned int channelLayout;
@property (retain, nonatomic) NSString *audioChannelLayoutDescription;
@property (readonly, nonatomic) long long badging;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)humanDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMediaRemoteAudioFormat:(id)a0;
- (id)_descriptionForChannelLayoutTag:(unsigned int)a0;
- (id)debugBadgingDescription;
- (id)debugBitDepthDescription;
- (id)debugBitRateDescription;
- (id)debugChannelCountDescription;
- (id)debugChannelLayoutDescription;
- (id)debugCodecDescription;
- (id)debugRenderingModeDescription;
- (id)debugSampleRateDescription;
- (id)debugTierDescription;

@end
