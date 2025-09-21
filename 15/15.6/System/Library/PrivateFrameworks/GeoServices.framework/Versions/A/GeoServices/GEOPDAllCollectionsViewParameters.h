@class GEOPDPublisherSuggestionParameters, PBDataReader, GEOPDViewportInfo, GEOPDAllCollectionsViewResultFilter, PBUnknownFields;

@interface GEOPDAllCollectionsViewParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDPublisherSuggestionParameters *_publisherSuggestionParameters;
    GEOPDAllCollectionsViewResultFilter *_resultFilter;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _numClientizedResults;
    struct { unsigned char has_numClientizedResults : 1; unsigned char read_unknownFields : 1; unsigned char read_publisherSuggestionParameters : 1; unsigned char read_resultFilter : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

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
