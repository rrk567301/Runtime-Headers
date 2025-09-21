@class GEOLatLng, PBUnknownFields;

@interface GEOPDSearchOriginationRoutePlanningParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLatLng *_previousLocation;
    BOOL _isEditServerRecommendedStop;
    struct { unsigned char has_isEditServerRecommendedStop : 1; } _flags;
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
