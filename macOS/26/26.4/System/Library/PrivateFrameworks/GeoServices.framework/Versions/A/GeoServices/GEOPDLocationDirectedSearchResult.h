@class PBDataReader, GEOPDPaginationInfo, GEOMapRegion, NSMutableArray, PBUnknownFields;

@interface GEOPDLocationDirectedSearchResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_disambiguationLabels;
    GEOMapRegion *_displayMapRegion;
    GEOPDPaginationInfo *_paginationInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_disambiguationLabels : 1; unsigned char read_displayMapRegion : 1; unsigned char read_paginationInfo : 1; unsigned char wrote_anyField : 1; } _flags;
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

@end
