@class NSString;

@interface GEOBusynessPoiLookupTileMetaData : PBCodable <NSCopying> {
    unsigned long long _tileId;
    NSString *_version;
    unsigned int _poiCount;
    struct { unsigned char has_tileId : 1; unsigned char has_poiCount : 1; } _flags;
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
