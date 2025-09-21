@class NSString, PBDataReader;

@interface GEOPDSearchQueryNeuralSegmentMetadata : PBCodable <NSCopying> {
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
