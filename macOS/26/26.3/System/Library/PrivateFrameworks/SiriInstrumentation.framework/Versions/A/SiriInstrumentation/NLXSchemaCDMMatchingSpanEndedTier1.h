@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMMatchingSpanEndedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *matchingSpans;
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
- (void)addMatchingSpans:(id)a0;
- (void)clearMatchingSpans;
- (void)deleteLinkId;
- (void)deleteMatchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;

@end
