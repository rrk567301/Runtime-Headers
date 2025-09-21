@class NSString, NSData, SISchemaUUID;

@interface NLXSchemaCDMDelegatedUserDialogAct : SISchemaInstrumentationMessage {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char siriVocabularySpanCount : 1; unsigned char mentionResolverSpanCount : 1; unsigned char rewriteType : 1; unsigned char contextMatcherSpanCount : 1; } _has;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) char hasAsrHypothesisIndex;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSString *externalParserId;
@property (nonatomic) char hasExternalParserId;
@property (nonatomic) unsigned int siriVocabularySpanCount;
@property (nonatomic) char hasSiriVocabularySpanCount;
@property (nonatomic) unsigned int mentionResolverSpanCount;
@property (nonatomic) char hasMentionResolverSpanCount;
@property (nonatomic) int rewriteType;
@property (nonatomic) char hasRewriteType;
@property (nonatomic) unsigned int contextMatcherSpanCount;
@property (nonatomic) char hasContextMatcherSpanCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAsrHypothesisIndex;
- (void)deleteContextMatcherSpanCount;
- (void)deleteExternalParserId;
- (void)deleteLinkId;
- (void)deleteMentionResolverSpanCount;
- (void)deleteRewriteType;
- (void)deleteSiriVocabularySpanCount;
- (id)suppressMessageUnderConditions;

@end
