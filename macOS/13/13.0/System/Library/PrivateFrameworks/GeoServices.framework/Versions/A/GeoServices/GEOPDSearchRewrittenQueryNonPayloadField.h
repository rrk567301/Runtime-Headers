@class NSString;

@interface GEOPDSearchRewrittenQueryNonPayloadField : PBCodable <NSCopying> {
    NSString *_rewrittenQuery;
    int _pipelineType;
    BOOL _hasCamelCase;
    BOOL _hasDirectionsIntent;
    BOOL _hasEmojiRewrite;
    BOOL _hasNumericSplit;
    BOOL _hasSynonymCounterpart;
    struct { unsigned char has_pipelineType : 1; unsigned char has_hasCamelCase : 1; unsigned char has_hasDirectionsIntent : 1; unsigned char has_hasEmojiRewrite : 1; unsigned char has_hasNumericSplit : 1; unsigned char has_hasSynonymCounterpart : 1; } _flags;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
