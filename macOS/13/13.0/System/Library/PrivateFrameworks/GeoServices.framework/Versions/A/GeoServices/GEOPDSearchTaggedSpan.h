@class NSString, PBDataReader;

@interface GEOPDSearchTaggedSpan : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_span;
    NSString *_tag;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_span : 1; unsigned char read_tag : 1; unsigned char wrote_anyField : 1; } _flags;
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
