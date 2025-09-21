@class NSData, PLUSSchemaPLUSSuggestion, SISchemaUUID;

@interface PLUSSchemaPLUSSuggestionMatchResult : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) char hasSuggestionId;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestion *generatedSuggestion;
@property (nonatomic) char hasGeneratedSuggestion;
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
- (void)deleteGeneratedSuggestion;
- (void)deleteSuggestionId;
- (id)suppressMessageUnderConditions;

@end
