@class NSArray, NSData, SISchemaUUID;

@interface CNVSchemaCollatedActionCandidate : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *primaryActionCandidateId;
@property (nonatomic) BOOL hasPrimaryActionCandidateId;
@property (copy, nonatomic) NSArray *alternativeActionCandidateIds;
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
- (void)deletePrimaryActionCandidateId;
- (void)clearAlternativeActionCandidateIds;
- (void)deleteAlternativeActionCandidateIds;
- (void)addAlternativeActionCandidateIds:(id)a0;
- (unsigned long long)alternativeActionCandidateIdsCount;
- (id)alternativeActionCandidateIdsAtIndex:(unsigned long long)a0;

@end
