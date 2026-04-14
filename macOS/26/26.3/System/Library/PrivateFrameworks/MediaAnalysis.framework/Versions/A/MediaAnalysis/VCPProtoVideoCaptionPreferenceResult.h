@interface VCPProtoVideoCaptionPreferenceResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (nonatomic) BOOL preference;
@property (nonatomic) float score;

+ (id)resultFromLegacyDictionary:(id)a0;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)exportToLegacyDictionary;

@end
