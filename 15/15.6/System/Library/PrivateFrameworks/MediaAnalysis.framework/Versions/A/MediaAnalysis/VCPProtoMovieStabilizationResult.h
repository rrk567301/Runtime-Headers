@class NSData;

@interface VCPProtoMovieStabilizationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (nonatomic) float analysisConfidence;
@property (nonatomic) char gyroStabilization;
@property (readonly, nonatomic) char hasRecipeBlob;
@property (retain, nonatomic) NSData *recipeBlob;

+ (id)resultFromLegacyDictionary:(id)a0;

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
- (id)exportToLegacyDictionary;

@end
