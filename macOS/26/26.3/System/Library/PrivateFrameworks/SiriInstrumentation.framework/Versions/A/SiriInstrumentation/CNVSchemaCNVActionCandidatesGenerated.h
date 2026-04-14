@class NSArray, NSData;

@interface CNVSchemaCNVActionCandidatesGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionCandidates;
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
- (id)actionCandidatesAtIndex:(unsigned long long)a0;
- (unsigned long long)actionCandidatesCount;
- (void)addActionCandidates:(id)a0;
- (void)clearActionCandidates;
- (void)deleteActionCandidates;

@end
