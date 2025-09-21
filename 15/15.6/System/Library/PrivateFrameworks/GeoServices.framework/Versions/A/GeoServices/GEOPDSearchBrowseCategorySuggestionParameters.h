@class PBDataReader, NSMutableArray, GEOPDSearchOriginationInfo, GEOPDVenueIdentifier, GEOPDViewportInfo, GEOPDSSearchEvChargingParameters, PBUnknownFields;

@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _engineTypes;
    GEOPDSSearchEvChargingParameters *_evChargingParameters;
    NSMutableArray *_inputCategorys;
    double _requestLocalTimestamp;
    GEOPDSearchOriginationInfo *_searchOriginationInfo;
    GEOPDVenueIdentifier *_venueFilter;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _minimumNumberOfCategories;
    int _preferredTransportType;
    int _suggestionType;
    char _isCarplayRequest;
    char _isFlatCategoryListRequest;
    char _isFromNoQueryState;
    char _isWidgetRequest;
    struct { unsigned char has_requestLocalTimestamp : 1; unsigned char has_minimumNumberOfCategories : 1; unsigned char has_preferredTransportType : 1; unsigned char has_suggestionType : 1; unsigned char has_isCarplayRequest : 1; unsigned char has_isFlatCategoryListRequest : 1; unsigned char has_isFromNoQueryState : 1; unsigned char has_isWidgetRequest : 1; unsigned char read_unknownFields : 1; unsigned char read_engineTypes : 1; unsigned char read_evChargingParameters : 1; unsigned char read_inputCategorys : 1; unsigned char read_searchOriginationInfo : 1; unsigned char read_venueFilter : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
