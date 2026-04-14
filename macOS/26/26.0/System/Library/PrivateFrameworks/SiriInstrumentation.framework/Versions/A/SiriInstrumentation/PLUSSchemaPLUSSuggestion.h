@class NSData, PLUSSchemaPLUSSuggestionMetadata, PLUSSchemaPLUSSuggestionValue;

@interface PLUSSchemaPLUSSuggestion : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionMetadata *suggestionMetadata;
@property (nonatomic) BOOL hasSuggestionMetadata;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestionValue *suggestionValue;
@property (nonatomic) BOOL hasSuggestionValue;
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
- (void)deleteSuggestionMetadata;
- (void)deleteSuggestionValue;

@end
