@class GEOPDSearchGeoParsingResult, NSMutableArray, PBDataReader;

@interface GEOPDSearchQueryGeoTagMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _geoRewriteTypes;
    struct { int *list; unsigned long long count; unsigned long long size; } _tagSources;
    GEOPDSearchGeoParsingResult *_geoParsingResult;
    NSMutableArray *_geoTypeMaps;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_geoRewriteTypes : 1; unsigned char read_tagSources : 1; unsigned char read_geoParsingResult : 1; unsigned char read_geoTypeMaps : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (void)dealloc;

@end
