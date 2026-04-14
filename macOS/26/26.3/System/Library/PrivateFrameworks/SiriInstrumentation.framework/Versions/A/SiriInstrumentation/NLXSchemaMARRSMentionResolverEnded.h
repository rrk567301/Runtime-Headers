@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionResolverEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mentionResolverSpans;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addMentionResolverSpans:(id)a0;
- (void)clearMentionResolverSpans;
- (void)deleteLinkId;
- (void)deleteMentionResolverSpans;
- (id)mentionResolverSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)mentionResolverSpansCount;

@end
