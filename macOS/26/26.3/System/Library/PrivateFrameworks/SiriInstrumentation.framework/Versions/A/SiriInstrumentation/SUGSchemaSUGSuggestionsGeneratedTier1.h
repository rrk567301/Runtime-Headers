@class NSArray, NSData, SISchemaUUID;

@interface SUGSchemaSUGSuggestionsGeneratedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *suggestions;
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
- (void)deleteLinkId;
- (void)deleteSuggestions;

@end
