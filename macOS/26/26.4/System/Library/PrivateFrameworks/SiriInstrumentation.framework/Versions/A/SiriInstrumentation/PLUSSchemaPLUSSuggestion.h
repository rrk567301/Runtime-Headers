@class NSData, PLUSSchemaPLUSSuggestionMetadata, PLUSSchemaPLUSSuggestionValue;

@interface PLUSSchemaPLUSSuggestion : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionMetadata *suggestionMetadata;
@property (nonatomic) BOOL hasSuggestionMetadata;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestionValue *suggestionValue;
@property (nonatomic) BOOL hasSuggestionValue;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSuggestionMetadata;
- (void)deleteSuggestionValue;

@end
