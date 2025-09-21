@class NSArray, NSData;

@interface USPSchemaUSPLoggingInitalized : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *sessionInfoItems;
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
- (void)addSessionInfoItems:(id)a0;
- (void)clearSessionInfoItems;
- (void)deleteSessionInfoItems;
- (id)sessionInfoItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)sessionInfoItemsCount;

@end
