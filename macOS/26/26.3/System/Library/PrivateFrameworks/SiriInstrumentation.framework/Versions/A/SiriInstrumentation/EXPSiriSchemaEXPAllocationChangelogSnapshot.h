@class NSArray, NSData;

@interface EXPSiriSchemaEXPAllocationChangelogSnapshot : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations;
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
- (void)addAllocations:(id)a0;
- (id)allocationsAtIndex:(unsigned long long)a0;
- (unsigned long long)allocationsCount;
- (void)clearAllocations;
- (void)deleteAllocations;

@end
