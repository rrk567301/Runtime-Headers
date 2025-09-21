@class PBDataReader, GEOPDClientRankingFeatureFunctionTypeDiscrete, GEOPDClientRankingFeatureTypeResult, GEOPDClientRankingFeatureFunctionTypeLinear, GEOPDClientRankingFeatureTypeSource, PBUnknownFields;

@interface GEOPDClientRankingFeatureUnit : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDClientRankingFeatureTypeResult *_featureTypeResult;
    GEOPDClientRankingFeatureTypeSource *_featureTypeSource;
    GEOPDClientRankingFeatureFunctionTypeDiscrete *_functionTypeDiscrete;
    GEOPDClientRankingFeatureFunctionTypeLinear *_functionTypeLinear;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _featureType;
    int _functionType;
    struct { unsigned char has_featureType : 1; unsigned char has_functionType : 1; unsigned char read_unknownFields : 1; unsigned char read_featureTypeResult : 1; unsigned char read_featureTypeSource : 1; unsigned char read_functionTypeDiscrete : 1; unsigned char read_functionTypeLinear : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
