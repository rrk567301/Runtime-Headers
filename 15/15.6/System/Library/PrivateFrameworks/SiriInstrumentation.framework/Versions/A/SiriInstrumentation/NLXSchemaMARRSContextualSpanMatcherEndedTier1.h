@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSContextualSpanMatcherEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *contextualSpansTier1s;
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
- (void)addContextualSpansTier1:(id)a0;
- (void)clearContextualSpansTier1;
- (id)contextualSpansTier1AtIndex:(unsigned long long)a0;
- (unsigned long long)contextualSpansTier1Count;
- (void)deleteContextualSpansTier1;
- (void)deleteLinkId;
- (id)suppressMessageUnderConditions;

@end
