@class NSString;

@interface GEOPDSearchRewrittenQueryNonPayloadField : PBCodable <NSCopying> {
    NSString *_rewrittenQuery;
    int _pipelineType;
    int _rewrittenQueryType;
    char _hasCamelCase;
    char _hasDirectionsIntent;
    char _hasEmojiRewrite;
    char _hasNumericSplit;
    char _hasSynonymCounterpart;
    struct { unsigned char has_pipelineType : 1; unsigned char has_rewrittenQueryType : 1; unsigned char has_hasCamelCase : 1; unsigned char has_hasDirectionsIntent : 1; unsigned char has_hasEmojiRewrite : 1; unsigned char has_hasNumericSplit : 1; unsigned char has_hasSynonymCounterpart : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
