@class NSArray, NSString, NSData;

@interface PLUSSchemaPLUSMediaSuggestionEvaluation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *entitySummaries;
@property (copy, nonatomic) NSArray *pommesAlternativeEntityIds;
@property (copy, nonatomic) NSString *pommesSelectedMediaEntityAdamId;
@property (nonatomic) BOOL hasPommesSelectedMediaEntityAdamId;
@property (copy, nonatomic) NSString *inferredMediaEntityAdamId;
@property (nonatomic) BOOL hasInferredMediaEntityAdamId;
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
- (void)deleteInferredMediaEntityAdamId;
- (void)clearEntitySummaries;
- (void)deleteEntitySummaries;
- (void)addEntitySummaries:(id)a0;
- (unsigned long long)entitySummariesCount;
- (id)entitySummariesAtIndex:(unsigned long long)a0;
- (void)clearPommesAlternativeEntityIds;
- (void)deletePommesAlternativeEntityIds;
- (void)addPommesAlternativeEntityIds:(id)a0;
- (unsigned long long)pommesAlternativeEntityIdsCount;
- (id)pommesAlternativeEntityIdsAtIndex:(unsigned long long)a0;
- (void)deletePommesSelectedMediaEntityAdamId;

@end
