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

- (void)clearSuggestions;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)addSuggestions:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (unsigned long long)suggestionsCount;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (void)deleteAutoCompleteQuery;
- (void)deleteGenerationId;
- (void)deleteGenerationTag;
- (void)deleteInvocationType;
- (void)deleteLinkId;
- (void)deleteSuggestions;

@end
