@class NSArray, NSData;

@interface PLUSSchemaPLUSContactSuggestionHeartbeatReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *suggestionSummaries;
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
- (void)clearSuggestionSummaries;
- (void)deleteSuggestionSummaries;
- (void)addSuggestionSummaries:(id)a0;
- (unsigned long long)suggestionSummariesCount;
- (id)suggestionSummariesAtIndex:(unsigned long long)a0;

@end
