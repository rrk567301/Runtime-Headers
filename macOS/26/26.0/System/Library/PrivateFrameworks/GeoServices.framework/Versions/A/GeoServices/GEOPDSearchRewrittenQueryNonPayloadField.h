@class NSString, PBDataReader;

@interface GEOPDSearchRewrittenQueryNonPayloadField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_rewrittenQuery;
    NSString *_triggerFeatureSummary;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _pipelineType;
    int _rewrittenQueryType;
    BOOL _hasCamelCase;
    BOOL _hasDirectionsIntent;
    BOOL _hasEmojiRewrite;
    BOOL _hasNumericSplit;
    BOOL _hasSynonymCounterpart;
    struct { unsigned char has_pipelineType : 1; unsigned char has_rewrittenQueryType : 1; unsigned char has_hasCamelCase : 1; unsigned char has_hasDirectionsIntent : 1; unsigned char has_hasEmojiRewrite : 1; unsigned char has_hasNumericSplit : 1; unsigned char has_hasSynonymCounterpart : 1; unsigned char read_rewrittenQuery : 1; unsigned char read_triggerFeatureSummary : 1; unsigned char wrote_anyField : 1; } _flags;
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
