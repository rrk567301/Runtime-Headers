@class GEOPDSearchTokenSet, NSString, PBDataReader;

@interface GEOPDSearchQueryTokenizerMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDSearchTokenSet *_tokenSet;
    NSString *_tokenizerName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _tokenizerType;
    struct { unsigned char has_tokenizerType : 1; unsigned char read_tokenSet : 1; unsigned char read_tokenizerName : 1; unsigned char wrote_anyField : 1; } _flags;
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
