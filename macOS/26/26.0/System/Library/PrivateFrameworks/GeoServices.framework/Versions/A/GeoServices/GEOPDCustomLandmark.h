@class GEOPDGeographicCoordinate, PBUnknownFields;

@interface GEOPDCustomLandmark : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDGeographicCoordinate *_position;
    unsigned int _landmarkId;
    struct { unsigned char has_landmarkId : 1; } _flags;
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
