@class NSArray, NSData, SISchemaUUID;

@interface SUGSchemaSUGSuggestionsGeneratedTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSData *jsonData;

- (void)clearSuggestions;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)suggestionsCount;
- (void)addSuggestions:(id)a0;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteLinkId;
- (void)deleteSuggestions;

@end
