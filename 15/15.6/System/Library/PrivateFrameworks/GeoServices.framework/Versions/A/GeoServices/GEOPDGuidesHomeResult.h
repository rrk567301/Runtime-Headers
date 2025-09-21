@class GEOPDGuidesHomeFixedSection, PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDGuidesHomeResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDGuidesHomeFixedSection *_featuredGuides;
    GEOPDGuidesHomeFixedSection *_filteredGuides;
    GEOPDGuidesHomeFixedSection *_filters;
    NSMutableArray *_repeatableSections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_featuredGuides : 1; unsigned char read_filteredGuides : 1; unsigned char read_filters : 1; unsigned char read_repeatableSections : 1; unsigned char wrote_anyField : 1; } _flags;
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
