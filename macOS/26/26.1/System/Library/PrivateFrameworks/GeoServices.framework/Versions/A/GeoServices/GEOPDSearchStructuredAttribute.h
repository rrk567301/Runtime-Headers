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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;

@end
