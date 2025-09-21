@class GEOPDSearchTokenSet, NSMutableArray, PBDataReader;

@interface GEOPDSearchTokenCandidates : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_candidates;
    GEOPDSearchTokenSet *_token;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _isMerged;
    char _isSplit;
    struct { unsigned char has_isMerged : 1; unsigned char has_isSplit : 1; unsigned char read_candidates : 1; unsigned char read_token : 1; unsigned char wrote_anyField : 1; } _flags;
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
