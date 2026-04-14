@class NSData, VCPProtoTimeRange;

@interface VCPProtoAudioFusedVideoEmbeddingResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (retain, nonatomic) NSData *embeddingBlob;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;

+ (id)resultFromLegacyDictionary:(id)a0;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;

@end
