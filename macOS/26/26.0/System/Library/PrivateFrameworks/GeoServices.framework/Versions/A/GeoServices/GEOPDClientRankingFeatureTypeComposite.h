@class NSMutableArray, PBUnknownFields;

@interface GEOPDClientRankingFeatureTypeComposite : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_variableExponentPairs;
    float _featureWeight;
    struct { unsigned char has_featureWeight : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
