@class NSArray, NSData;

@interface PEGASUSSchemaPEGASUSAlternateQuerySuggestionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *alternateQuerySuggestionCandidateTier1s;
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
- (void)addAlternateQuerySuggestionCandidateTier1:(id)a0;
- (id)alternateQuerySuggestionCandidateTier1AtIndex:(unsigned long long)a0;
- (unsigned long long)alternateQuerySuggestionCandidateTier1Count;
- (void)clearAlternateQuerySuggestionCandidateTier1;
- (void)deleteAlternateQuerySuggestionCandidateTier1;

@end
