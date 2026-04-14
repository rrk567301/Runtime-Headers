@class GEOPDViewportInfo, NSString, GEOPDSSearchFilter, GEOPDNearestTransitParameters, PBDataReader, PBUnknownFields, GEOLatLng, GEOPDPaginationParameters;

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDNearestTransitParameters *_nearestTransitParameters;
    GEOPDPaginationParameters *_paginationParameters;
    GEOPDSSearchFilter *_searchFilter;
    GEOLatLng *_searchLocation;
    NSString *_searchString;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _maxResults;
    int _searchType;
    int _sortOrder;
    BOOL _requestAddressesForPostCode;
    struct { unsigned char has_maxResults : 1; unsigned char has_searchType : 1; unsigned char has_sortOrder : 1; unsigned char has_requestAddressesForPostCode : 1; unsigned char read_unknownFields : 1; unsigned char read_nearestTransitParameters : 1; unsigned char read_paginationParameters : 1; unsigned char read_searchFilter : 1; unsigned char read_searchLocation : 1; unsigned char read_searchString : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithSearchURLQuery:(id)a0 coordinate:(struct { double x0; double x1; })a1 maxResults:(unsigned int)a2 traits:(id)a3;

@end
