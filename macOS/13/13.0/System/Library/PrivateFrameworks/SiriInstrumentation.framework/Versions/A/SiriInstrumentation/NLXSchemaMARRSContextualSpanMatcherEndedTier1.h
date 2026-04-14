@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSContextualSpanMatcherEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *contextualSpansTier1s;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLinkId;
- (void)clearContextualSpansTier1;
- (void)deleteContextualSpansTier1;
- (void)addContextualSpansTier1:(id)a0;
- (unsigned long long)contextualSpansTier1Count;
- (id)contextualSpansTier1AtIndex:(unsigned long long)a0;

@end
