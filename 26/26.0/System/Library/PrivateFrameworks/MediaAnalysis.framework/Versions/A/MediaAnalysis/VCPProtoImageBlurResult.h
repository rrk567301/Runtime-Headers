@interface VCPProtoImageBlurResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned char faceSharpness : 1; } _has;
}

@property (nonatomic) float sharpness;
@property (nonatomic) BOOL hasFaceSharpness;
@property (nonatomic) float faceSharpness;

+ (id)resultFromLegacyDictionary:(id)a0;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)exportToLegacyDictionary;

@end
