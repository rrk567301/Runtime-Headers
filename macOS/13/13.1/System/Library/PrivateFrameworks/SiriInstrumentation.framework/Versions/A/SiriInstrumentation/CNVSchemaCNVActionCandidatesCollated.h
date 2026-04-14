@class NSArray, NSData;

@interface CNVSchemaCNVActionCandidatesCollated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *collatedActionCandidates;
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
- (void)clearCollatedActionCandidates;
- (void)deleteCollatedActionCandidates;
- (void)addCollatedActionCandidates:(id)a0;
- (unsigned long long)collatedActionCandidatesCount;
- (id)collatedActionCandidatesAtIndex:(unsigned long long)a0;

@end
