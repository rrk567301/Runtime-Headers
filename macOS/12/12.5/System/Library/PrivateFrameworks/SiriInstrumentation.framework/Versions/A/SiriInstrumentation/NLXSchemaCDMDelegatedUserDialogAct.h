@class NSString, NSData, SISchemaUUID;

@interface NLXSchemaCDMDelegatedUserDialogAct : SISchemaInstrumentationMessage {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char siriVocabularySpanCount : 1; unsigned char mentionResolverSpanCount : 1; unsigned char rewriteType : 1; } _has;
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
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLinkId;
- (void)deleteAsrHypothesisIndex;
- (void)deleteExternalParserId;
- (void)deleteSiriVocabularySpanCount;
- (void)deleteMentionResolverSpanCount;
- (void)deleteRewriteType;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
