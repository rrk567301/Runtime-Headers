@class GEOLocation, PBUnknownFields;

@interface GEOPDGroundViewLabelParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _locationId;
    GEOLocation *_location;
    struct { unsigned char has_locationId : 1; } _flags;
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
