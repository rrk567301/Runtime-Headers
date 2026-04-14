@class PBDataReader, GEOPDPublisherSuggestionResult, NSMutableArray, PBUnknownFields;

@interface GEOPDAllCollectionsViewResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_collectionIds;
    GEOPDPublisherSuggestionResult *_publisherSuggestionResult;
    NSMutableArray *_resultFilters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_collectionIds : 1; unsigned char read_publisherSuggestionResult : 1; unsigned char read_resultFilters : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
