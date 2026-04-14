@class NSArray, NSData;

@interface EXPSiriSchemaEXPAllocationSnapshot : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearAllocations;
- (void)addAllocations:(id)a0;
- (void)deleteAllocations;
- (unsigned long long)allocationsCount;
- (id)allocationsAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
