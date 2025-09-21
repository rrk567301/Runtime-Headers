@class NSArray, NSData;

@interface USPSchemaUSPLoggingInitalized : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *sessionInfoItems;
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
- (void)addSessionInfoItems:(id)a0;
- (void)clearSessionInfoItems;
- (void)deleteSessionInfoItems;
- (id)sessionInfoItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)sessionInfoItemsCount;
- (id)suppressMessageUnderConditions;

@end
