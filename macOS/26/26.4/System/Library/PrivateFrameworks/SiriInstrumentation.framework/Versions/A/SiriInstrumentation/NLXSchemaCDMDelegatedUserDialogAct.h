@class NSString, NSData, SISchemaUUID;

@interface NLXSchemaCDMDelegatedUserDialogAct : SISchemaInstrumentationMessage {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char siriVocabularySpanCount : 1; unsigned char mentionResolverSpanCount : 1; unsigned char rewriteType : 1; unsigned char contextMatcherSpanCount : 1; } _has;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *externalParserId;
@property (nonatomic) BOOL hasExternalParserId;
@property (nonatomic) unsigned int siriVocabularySpanCount;
@property (nonatomic) BOOL hasSiriVocabularySpanCount;
@property (nonatomic) unsigned int mentionResolverSpanCount;
@property (nonatomic) BOOL hasMentionResolverSpanCount;
@property (nonatomic) int rewriteType;
@property (nonatomic) BOOL hasRewriteType;
@property (nonatomic) unsigned int contextMatcherSpanCount;
@property (nonatomic) BOOL hasContextMatcherSpanCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAsrHypothesisIndex;
- (void)deleteContextMatcherSpanCount;
- (void)deleteExternalParserId;
- (void)deleteLinkId;
- (void)deleteMentionResolverSpanCount;
- (void)deleteRewriteType;
- (void)deleteSiriVocabularySpanCount;

@end
