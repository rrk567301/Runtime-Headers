@class NSMutableArray, GEOPDSearchAttribute, PBDataReader;

@interface GEOPDSearchStructuredAttribute : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDSearchAttribute *_attribute;
    NSMutableArray *_nestedAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _operatorValue;
    struct { unsigned char has_operatorValue : 1; unsigned char read_attribute : 1; unsigned char read_nestedAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
