@class NSArray, NSString, NSData, SISchemaUUID;

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
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearSuggestions;
- (void)addSuggestions:(id)a0;
- (unsigned long long)suggestionsCount;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteSuggestions;
- (void)deleteInvocationType;
- (void)deleteGenerationId;
- (void)deleteGenerationTag;

@end
