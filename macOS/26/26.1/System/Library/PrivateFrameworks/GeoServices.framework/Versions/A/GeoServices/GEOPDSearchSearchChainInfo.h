@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchSearchChainInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_brandKey;
    NSMutableArray *_countryOccurrences;
    NSString *_searchChainKey;
    unsigned long long _total;
    NSMutableArray *_triggers;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_total : 1; unsigned char read_brandKey : 1; unsigned char read_countryOccurrences : 1; unsigned char read_searchChainKey : 1; unsigned char read_triggers : 1; unsigned char wrote_anyField : 1; } _flags;
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
