@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionResolverEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mentionResolverSpansTier1s;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
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
- (void)deleteMentionResolverSpansTier1;
- (void)addMentionResolverSpansTier1:(id)a0;
- (void)clearMentionResolverSpansTier1;
- (void)deleteLinkId;
- (id)mentionResolverSpansTier1AtIndex:(unsigned long long)a0;
- (unsigned long long)mentionResolverSpansTier1Count;
- (id)suppressMessageUnderConditions;

@end
