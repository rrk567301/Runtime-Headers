@class NSArray, NSData;

@interface SISchemaABExperimentAllocationChanged : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations;
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
- (void)addAllocations:(id)a0;
- (id)allocationsAtIndex:(unsigned long long)a0;
- (unsigned long long)allocationsCount;
- (void)clearAllocations;
- (void)deleteAllocations;

@end
