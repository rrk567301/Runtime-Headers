@interface VCMediaNegotiationBlobMultiwayAudioStream : PBCodable <NSCopying> {
    struct { unsigned char maxMediaBitrate : 1; unsigned char maxNetworkBitrate : 1; unsigned char maxPacketsPerSecond : 1; unsigned char repairedMaxNetworkBitrate : 1; unsigned char repairedStreamID : 1; unsigned char supportedPayloads : 1; } _has;
}

@property (nonatomic) unsigned int ssrc;
@property (nonatomic) char hasMaxNetworkBitrate;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) char hasSupportedPayloads;
@property (nonatomic) unsigned int supportedPayloads;
@property (nonatomic) unsigned int streamID;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) char hasMaxMediaBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) char hasMaxPacketsPerSecond;
@property (nonatomic) float maxPacketsPerSecond;
@property (nonatomic) char hasRepairedStreamID;
@property (nonatomic) unsigned int repairedStreamID;
@property (nonatomic) char hasRepairedMaxNetworkBitrate;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithStreamConfig:(id)a0;
- (id)newMultiwayAudioStream;
- (void)printWithLogFile:(void *)a0;
- (void)setPayloadFlagsWithPayloads:(id)a0;

@end
