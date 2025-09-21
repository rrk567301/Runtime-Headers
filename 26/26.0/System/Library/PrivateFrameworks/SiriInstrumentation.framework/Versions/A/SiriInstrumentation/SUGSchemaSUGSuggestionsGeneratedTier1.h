@class NSArray, NSData, SISchemaUUID;

@interface SUGSchemaSUGSuggestionsGeneratedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *suggestions;
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
- (void)deleteLinkId;
- (void)deleteSuggestions;

@end
