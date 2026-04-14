@class NSArray, NSData;

@interface CAARSchemaCAARTieBreakersExecuted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *tiebreakers;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addTiebreakers:(id)a0;
- (void)clearTiebreakers;
- (void)deleteTiebreakers;
- (id)tiebreakersAtIndex:(unsigned long long)a0;
- (unsigned long long)tiebreakersCount;

@end
