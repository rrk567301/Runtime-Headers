@class GEOLatLng;

@interface GEOPDSearchEntry : PBCodable <NSCopying> {
    GEOLatLng *_center;
    long long _geoId;
    int _geoTypeId;
    struct { unsigned char has_geoId : 1; unsigned char has_geoTypeId : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;

@end
