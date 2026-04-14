@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchSynonym : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_synFeatureMaps;
    NSString *_synonymText;
    NSMutableArray *_tokenLists;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _confidence;
    int _rewriteProvider;
    struct { unsigned char has_confidence : 1; unsigned char has_rewriteProvider : 1; unsigned char read_synFeatureMaps : 1; unsigned char read_synonymText : 1; unsigned char read_tokenLists : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
