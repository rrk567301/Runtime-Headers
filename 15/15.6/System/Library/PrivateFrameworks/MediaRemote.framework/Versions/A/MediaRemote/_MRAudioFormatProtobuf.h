@class NSString;

@interface _MRAudioFormatProtobuf : PBCodable <NSCopying> {
    struct { unsigned char bitDepth : 1; unsigned char bitrate : 1; unsigned char sampleRate : 1; unsigned char channelLayout : 1; unsigned char codec : 1; unsigned char renderingMode : 1; unsigned char tier : 1; unsigned char multiChannel : 1; unsigned char spatialized : 1; } _has;
}

@property (nonatomic) char hasTier;
@property (nonatomic) int tier;
@property (nonatomic) char hasBitrate;
@property (nonatomic) long long bitrate;
@property (nonatomic) char hasSampleRate;
@property (nonatomic) long long sampleRate;
@property (nonatomic) char hasBitDepth;
@property (nonatomic) long long bitDepth;
@property (nonatomic) char hasCodec;
@property (nonatomic) unsigned int codec;
@property (nonatomic) char hasSpatialized;
@property (nonatomic) char spatialized;
@property (nonatomic) char hasMultiChannel;
@property (nonatomic) char multiChannel;
@property (nonatomic) char hasChannelLayout;
@property (nonatomic) unsigned int channelLayout;
@property (readonly, nonatomic) char hasAudioChannelLayoutDescription;
@property (retain, nonatomic) NSString *audioChannelLayoutDescription;
@property (readonly, nonatomic) char hasGroupID;
@property (retain, nonatomic) NSString *groupID;
@property (readonly, nonatomic) char hasStableVariantID;
@property (retain, nonatomic) NSString *stableVariantID;
@property (nonatomic) char hasRenderingMode;
@property (nonatomic) int renderingMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRenderingMode:(id)a0;
- (id)renderingModeAsString:(int)a0;
- (int)StringAsTier:(id)a0;
- (id)tierAsString:(int)a0;

@end
