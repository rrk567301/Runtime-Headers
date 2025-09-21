@class NSData, PLUSSchemaPLUSSuggestionMetadata, PLUSSchemaPLUSSuggestionValue;

@interface PLUSSchemaPLUSSuggestion : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionMetadata *suggestionMetadata;
@property (nonatomic) char hasSuggestionMetadata;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestionValue *suggestionValue;
@property (nonatomic) char hasSuggestionValue;
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
- (void)deleteSuggestionMetadata;
- (void)deleteSuggestionValue;
- (id)suppressMessageUnderConditions;

@end
