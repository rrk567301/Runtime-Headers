@class PBDataReader;

@interface GEOBusynessPoiLookupTile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _latitudeE7s;
    struct { int *list; unsigned long long count; unsigned long long size; } _longitudeE7s;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _offsetId;
    struct { unsigned char has_offsetId : 1; unsigned char read_latitudeE7s : 1; unsigned char read_longitudeE7s : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;

@end
