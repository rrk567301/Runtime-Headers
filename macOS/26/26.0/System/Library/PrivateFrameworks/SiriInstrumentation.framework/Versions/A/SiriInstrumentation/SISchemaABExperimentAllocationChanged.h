@class NSArray, NSData;

@interface SISchemaABExperimentAllocationChanged : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations;
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
- (void)addAllocations:(id)a0;
- (id)allocationsAtIndex:(unsigned long long)a0;
- (unsigned long long)allocationsCount;
- (void)clearAllocations;
- (void)deleteAllocations;

@end
