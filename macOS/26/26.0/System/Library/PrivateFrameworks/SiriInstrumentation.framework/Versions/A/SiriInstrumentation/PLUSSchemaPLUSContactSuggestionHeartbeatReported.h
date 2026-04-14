@class NSArray, NSData;

@interface PLUSSchemaPLUSContactSuggestionHeartbeatReported : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *suggestionSummaries;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addSuggestionSummaries:(id)a0;
- (void)clearSuggestionSummaries;
- (void)deleteSuggestionSummaries;
- (id)suggestionSummariesAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionSummariesCount;

@end
