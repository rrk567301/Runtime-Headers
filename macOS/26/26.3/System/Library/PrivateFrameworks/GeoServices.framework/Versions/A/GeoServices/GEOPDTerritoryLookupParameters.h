@class NSMutableArray, PBUnknownFields;

@interface GEOPDTerritoryLookupParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_locations;
    BOOL _useDeviceExtendedLocation;
    struct { unsigned char has_useDeviceExtendedLocation : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
