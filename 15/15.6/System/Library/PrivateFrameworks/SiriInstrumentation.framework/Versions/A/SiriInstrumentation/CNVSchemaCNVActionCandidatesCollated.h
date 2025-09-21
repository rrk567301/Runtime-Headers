@class NSArray, NSData;

@interface CNVSchemaCNVActionCandidatesCollated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *collatedActionCandidates;
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
- (void)addCollatedActionCandidates:(id)a0;
- (void)clearCollatedActionCandidates;
- (id)collatedActionCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)collatedActionCandidatesCount;
- (void)deleteCollatedActionCandidates;
- (id)suppressMessageUnderConditions;

@end
