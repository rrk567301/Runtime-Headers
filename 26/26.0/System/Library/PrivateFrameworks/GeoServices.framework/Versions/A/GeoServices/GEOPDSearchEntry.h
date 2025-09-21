@class GEOLatLng;

@interface GEOPDSearchEntry : PBCodable <NSCopying> {
    GEOLatLng *_center;
    long long _geoId;
    int _geoTypeId;
    struct { unsigned char has_geoId : 1; unsigned char has_geoTypeId : 1; } _flags;
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
