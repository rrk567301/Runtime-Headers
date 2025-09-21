@class GEOLatLng;

@interface GEOPDSearchEntry : PBCodable <NSCopying> {
    GEOLatLng *_center;
    long long _geoId;
    int _geoTypeId;
    struct { unsigned char has_geoId : 1; unsigned char has_geoTypeId : 1; } _flags;
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
