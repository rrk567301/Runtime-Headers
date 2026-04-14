@class NSString, PBDataReader;

@interface GEOPDSearchQueryNeuralRewriteMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_inputQuery;
    NSString *_modelId;
    NSString *_rewrittenQuery;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _modelScore;
    struct { unsigned char has_modelScore : 1; unsigned char read_inputQuery : 1; unsigned char read_modelId : 1; unsigned char read_rewrittenQuery : 1; unsigned char wrote_anyField : 1; } _flags;
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
