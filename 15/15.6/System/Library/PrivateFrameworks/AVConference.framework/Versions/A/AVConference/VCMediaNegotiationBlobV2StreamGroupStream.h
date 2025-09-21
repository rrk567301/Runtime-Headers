@class NSData;

@interface VCMediaNegotiationBlobV2StreamGroupStream : PBCodable <NSCopying> {
    struct { unsigned char audioChannelCount : 1; unsigned char coordinateSystem : 1; unsigned char maxNetworkBitrate : 1; unsigned char maxNetworkBitrateV2 : 1; unsigned char metadata : 1; unsigned char payloadSpecOrPayloads : 1; unsigned char payloadsVersion : 1; unsigned char qualityIndex : 1; unsigned char repairedMaxNetworkBitrate : 1; unsigned char repairedMaxNetworkBitrateV2 : 1; unsigned char rtpSSRC : 1; unsigned char streamID : 1; unsigned char streamIndex : 1; } _has;
}

@property (nonatomic) char hasMetadata;
@property (nonatomic) unsigned int metadata;
@property (nonatomic) char hasPayloadSpecOrPayloads;
@property (nonatomic) unsigned int payloadSpecOrPayloads;
@property (nonatomic) char hasQualityIndex;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) char hasRtpSSRC;
@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) char hasStreamID;
@property (nonatomic) unsigned int streamID;
@property (nonatomic) char hasMaxNetworkBitrate;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) char hasRepairedMaxNetworkBitrate;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;
@property (nonatomic) char hasAudioChannelCount;
@property (nonatomic) unsigned int audioChannelCount;
@property (nonatomic) char hasStreamIndex;
@property (nonatomic) unsigned int streamIndex;
@property (readonly, nonatomic) char hasRequiredPackedPayload;
@property (retain, nonatomic) NSData *requiredPackedPayload;
@property (readonly, nonatomic) char hasOptionalPackedPayload;
@property (retain, nonatomic) NSData *optionalPackedPayload;
@property (nonatomic) char hasCoordinateSystem;
@property (nonatomic) unsigned int coordinateSystem;
@property (nonatomic) char hasPayloadsVersion;
@property (nonatomic) unsigned int payloadsVersion;
@property (nonatomic) char hasMaxNetworkBitrateV2;
@property (nonatomic) unsigned int maxNetworkBitrateV2;
@property (nonatomic) char hasRepairedMaxNetworkBitrateV2;
@property (nonatomic) unsigned int repairedMaxNetworkBitrateV2;

+ (void)appendMetadata:(unsigned int)a0 toString:(id)a1;
+ (void)appendPayloadsSpecsToString:(id)a0 streamConfig:(id)a1;
+ (void)appendPayloadsToString:(id)a0 streamConfig:(id)a1;
+ (id)defaultsForStreamGroupID:(unsigned int)a0 streamIndex:(unsigned char)a1;
+ (char)isDefaultPayloadConfigsWithStreamConfig:(id)a0 payloadConfigs:(id)a1 streamGroupID:(unsigned int)a2;
+ (char)isFallbackStreamWithStreamGroupID:(unsigned int)a0 streamConfig:(id)a1;
+ (unsigned int)metadataWithStreamConfig:(id)a0;
+ (unsigned int)payloadFlagWithPayload:(int)a0;
+ (char)payloadSpecWithStreamConfig:(id)a0 payloadConfigs:(id)a1 payloadSpecs:(unsigned int *)a2;
+ (int)payloadsWithPayloadBit:(int)a0;
+ (char)payloadsWithStreamConfig:(id)a0 payloadBitmap:(unsigned int *)a1;
+ (void)printWithLogFile:(void *)a0 prefix:(id)a1 streamConfig:(id)a2;
+ (char)qualityIndex:(unsigned int *)a0 isFallbackStream:(char *)a1 forStreamGroupID:(unsigned int)a2 streamIndex:(unsigned char)a3;
+ (char)streamIndex:(char *)a0 forStreamGroupID:(unsigned int)a1 qualityIndex:(unsigned int)a2 isFallbackStream:(char)a3;
+ (void)updateStreamConfig:(id)a0 withMetadata:(unsigned int)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned int)payloadsVersion;
- (unsigned int)actualAudioChannelCountWithDefaultConfig:(id)a0;
- (unsigned int)actualMaxNetworkBitrateWithDefaultConfig:(id)a0;
- (unsigned int)actualMaxRepairedNetworkBitrateWithDefaultConfig:(id)a0;
- (unsigned int)actualMetadataWithDefaultConfig:(id)a0;
- (unsigned int)actualQualityIndexWithDefaultConfig:(id)a0;
- (unsigned int)actualStreamIndex;
- (id)compressWithConfig:(id)a0;
- (id)dataRequiredPacketPayload;
- (char)initSSRC:(id)a0;
- (id)initWithStreamConfig:(id)a0 payloadConfigs:(id)a1 streamGroupID:(unsigned int)a2;
- (id)initWithStreamConfig:(id)a0 payloadConfigs:(id)a1 streamGroupID:(unsigned int)a2 defaultConfig:(id)a3;
- (unsigned int)mediaStreamGroupCoordinateSystem;
- (id)optionalPackedPayloaWithDefaultConfig:(id)a0;
- (id)optionalPayloadCompressWithConfig:(id)a0;
- (char)readOptionalPacketPayload:(struct tagStreamGroupStreamOptionalPackedPayload { unsigned short x0; unsigned short x1; unsigned char x2; } *)a0;
- (char)readRequiredPacketPayloadWithStreamConfig:(id)a0;
- (id)requiredPayloadCompressWithConfig:(id)a0;
- (char)setNegotiatedCoordinateSystemFromCoordinateSystem:(unsigned int)a0;
- (id)streamConfigWithPayloadConfigs:(id)a0 payloadConfigSampleRates:(id)a1 streamGroupID:(unsigned int)a2;
- (char)updatePayloadSpecsForConfig:(id)a0 defaultConfig:(id)a1;
- (char)updatePayloadSpecsForConfig:(id)a0 defaultConfig:(id)a1 payloadConfigs:(id)a2;
- (void)usePayloadSpecWithGroupID:(unsigned int)a0 qualityIndexForPayloadSpecIndex:(id)a1 defaultPayloadSpecsForQualityIndex:(id)a2;
- (char)usesPayloadConfigsWithGroupID:(unsigned int)a0;

@end
