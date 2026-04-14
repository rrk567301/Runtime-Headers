@class NSArray, NSData, SISchemaUUID;

@interface SUGSchemaSUGSuggestionsUIActivityTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSData *jsonData;

- (void)clearSuggestions;
- (id)suppressMessageUnderConditions;
- (void)addSuggestions:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)suggestionsCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLinkId;
- (void)deleteSuggestions;

@end
