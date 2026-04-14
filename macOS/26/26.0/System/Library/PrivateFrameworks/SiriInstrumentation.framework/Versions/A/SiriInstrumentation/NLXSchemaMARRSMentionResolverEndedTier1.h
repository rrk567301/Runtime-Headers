@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionResolverEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mentionResolverSpansTier1s;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteMentionResolverSpansTier1;
- (void)addMentionResolverSpansTier1:(id)a0;
- (void)clearMentionResolverSpansTier1;
- (void)deleteLinkId;
- (id)mentionResolverSpansTier1AtIndex:(unsigned long long)a0;
- (unsigned long long)mentionResolverSpansTier1Count;

@end
