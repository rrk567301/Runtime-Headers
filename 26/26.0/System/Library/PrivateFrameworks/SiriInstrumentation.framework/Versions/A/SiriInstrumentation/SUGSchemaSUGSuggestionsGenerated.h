@class NSArray, NSString, NSData, SISchemaUUID, SUGSchemaSUGAutoCompleteQuery;

@interface SUGSchemaSUGSuggestionsGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char invocationType : 1; } _has;
}

@property (copy, nonatomic) NSArray *suggestions;
@property (nonatomic) int invocationType;
@property (nonatomic) BOOL hasInvocationType;
@property (retain, nonatomic) SISchemaUUID *generationId;
@property (nonatomic) BOOL hasGenerationId;
@property (copy, nonatomic) NSString *generationTag;
@property (nonatomic) BOOL hasGenerationTag;
@property (retain, nonatomic) SUGSchemaSUGAutoCompleteQuery *autoCompleteQuery;
@property (nonatomic) BOOL hasAutoCompleteQuery;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (unsigned long long)suggestionsCount;
- (id)dictionaryRepresentation;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (void)clearSuggestions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addSuggestions:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAutoCompleteQuery;
- (void)deleteGenerationId;
- (void)deleteGenerationTag;
- (void)deleteInvocationType;
- (void)deleteLinkId;
- (void)deleteSuggestions;

@end
