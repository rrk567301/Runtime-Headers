@class _MRAudioFormatProtobuf, NSString, NSDictionary;

@interface MRContentItemMetadataAudioFormat : NSObject <NSCopying>

@property (readonly, nonatomic) _MRAudioFormatProtobuf *protobuf;
@property (nonatomic) long long tier;
@property (nonatomic) long long bitrate;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long bitDepth;
@property (nonatomic) unsigned int codec;
@property (nonatomic, getter=isSpatialized) char spatialized;
@property (nonatomic, getter=isMultiChannel) char multiChannel;
@property (nonatomic) long long renderingMode;
@property (nonatomic) unsigned int channelLayout;
@property (retain, nonatomic) NSString *audioChannelLayoutDescription;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *stableVariantID;
@property (readonly, nonatomic) char hasTier;
@property (readonly, nonatomic) char hasBitrate;
@property (readonly, nonatomic) char hasSampleRate;
@property (readonly, nonatomic) char hasBitDepth;
@property (readonly, nonatomic) char hasCodec;
@property (readonly, nonatomic) char hasSpatialized;
@property (readonly, nonatomic) char hasMultiChannel;
@property (readonly, nonatomic) char hasRenderingMode;
@property (readonly, nonatomic) char hasChannelLayout;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;

@end
