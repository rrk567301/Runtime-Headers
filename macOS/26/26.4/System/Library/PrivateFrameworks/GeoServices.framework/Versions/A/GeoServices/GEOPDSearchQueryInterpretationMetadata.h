@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchQueryInterpretationMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_canonicalCompletion;
    NSString *_completion;
    NSMutableArray *_featureMaps;
    NSMutableArray *_triggerFeatures;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _score;
    BOOL _isFromRuntimeQueryTriggerStore;
    struct { unsigned char has_score : 1; unsigned char has_isFromRuntimeQueryTriggerStore : 1; unsigned char read_canonicalCompletion : 1; unsigned char read_completion : 1; unsigned char read_featureMaps : 1; unsigned char read_triggerFeatures : 1; unsigned char wrote_anyField : 1; } _flags;
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
