@class PBUnknownFields, NSMutableArray, PBDataReader;

@interface GEOPDBatchReverseGeocodingParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _additionalPlaceTypes;
    NSMutableArray *_assetLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_additionalPlaceTypes : 1; unsigned char read_assetLocations : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (id)initWithData:(id)a0;
- (id)description;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
