@class NSData, VCPProtoTimeRange;

@interface VCPProtoEmbeddingResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (retain, nonatomic) NSData *embeddingBlob;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;

+ (id)imageEmbeddingVSKAssetFromResults:(id)a0 localIdentifier:(id)a1;
+ (id)resultFromLegacyDictionary:(id)a0;
+ (id)resultsFromVSKAsset:(id)a0;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)exportToLegacyDictionary;

@end
