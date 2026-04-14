@class GEOMapRegion, PBUnknownFields;

@interface GEOPDOfflineRegionNameParameters : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_region;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
