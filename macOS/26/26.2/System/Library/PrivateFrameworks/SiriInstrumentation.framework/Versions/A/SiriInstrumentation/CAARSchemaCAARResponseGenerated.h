@class NSArray, NSData;

@interface CAARSchemaCAARResponseGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionCandidateIds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)actionCandidateIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionCandidateIdsCount;
- (void)addActionCandidateIds:(id)a0;
- (void)clearActionCandidateIds;
- (void)deleteActionCandidateIds;

@end
