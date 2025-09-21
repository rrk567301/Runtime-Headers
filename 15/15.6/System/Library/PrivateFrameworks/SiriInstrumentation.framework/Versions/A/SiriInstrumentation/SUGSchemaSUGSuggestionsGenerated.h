@class NSArray, NSString, NSData, SISchemaUUID, SUGSchemaSUGAutoCompleteQuery;

@interface SUGSchemaSUGSuggestionsGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char invocationType : 1; } _has;
}

@property (copy, nonatomic) NSArray *suggestions;
@property (nonatomic) int invocationType;
@property (nonatomic) char hasInvocationType;
@property (retain, nonatomic) SISchemaUUID *generationId;
@property (nonatomic) char hasGenerationId;
@property (copy, nonatomic) NSString *generationTag;
@property (nonatomic) char hasGenerationTag;
@property (retain, nonatomic) SUGSchemaSUGAutoCompleteQuery *autoCompleteQuery;
@property (nonatomic) char hasAutoCompleteQuery;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addSuggestions:(id)a0;
- (void)clearSuggestions;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAutoCompleteQuery;
- (void)deleteGenerationId;
- (void)deleteGenerationTag;
- (void)deleteInvocationType;
- (void)deleteLinkId;
- (void)deleteSuggestions;
- (id)suppressMessageUnderConditions;

@end
