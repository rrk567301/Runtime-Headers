@class NSString, MRContentItemMetadataAudioFormat;

@interface MPNowPlayingInfoAudioFormat : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) MRContentItemMetadataAudioFormat *mediaRemoteAudioFormat;
@property (nonatomic) long long tier;
@property (nonatomic) long long bitrate;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long bitDepth;
@property (nonatomic) unsigned int codec;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *stableVariantID;
@property (nonatomic, getter=isSpatialized) char spatialized;
@property (nonatomic, getter=isMultiChannel) char multiChannel;
@property (nonatomic) long long renderingMode;
@property (nonatomic) unsigned int channelLayout;
@property (retain, nonatomic) NSString *audioChannelLayoutDescription;
@property (readonly, nonatomic) long long badging;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
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
- (id)humanDescription;

@end
