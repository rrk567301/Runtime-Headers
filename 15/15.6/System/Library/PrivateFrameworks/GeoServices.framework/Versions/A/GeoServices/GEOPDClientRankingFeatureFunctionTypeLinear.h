@class PBUnknownFields;

@interface GEOPDClientRankingFeatureFunctionTypeLinear : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    float _featureMaxRelativeValue;
    float _featureMeanValue;
    float _featureWeight;
    struct { unsigned char has_featureMaxRelativeValue : 1; unsigned char has_featureMeanValue : 1; unsigned char has_featureWeight : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
