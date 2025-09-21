@class PBDataReader, NSString, GEOPDRelatedSearchSuggestion, PBUnknownFields;

@interface GEOPDDisplayHeaderSubstitute : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_interpretedQuery;
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _substituteType;
    struct { unsigned char has_substituteType : 1; unsigned char read_unknownFields : 1; unsigned char read_interpretedQuery : 1; unsigned char read_relatedSearchSuggestion : 1; unsigned char wrote_anyField : 1; } _flags;
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
