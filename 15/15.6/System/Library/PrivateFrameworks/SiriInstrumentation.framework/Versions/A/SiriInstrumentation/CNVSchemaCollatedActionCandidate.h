@class NSArray, NSData, SISchemaUUID;

@interface CNVSchemaCollatedActionCandidate : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *primaryActionCandidateId;
@property (nonatomic) char hasPrimaryActionCandidateId;
@property (copy, nonatomic) NSArray *alternativeActionCandidateIds;
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
- (void)addAlternativeActionCandidateIds:(id)a0;
- (id)alternativeActionCandidateIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)alternativeActionCandidateIdsCount;
- (void)clearAlternativeActionCandidateIds;
- (void)deleteAlternativeActionCandidateIds;
- (void)deletePrimaryActionCandidateId;
- (id)suppressMessageUnderConditions;

@end
