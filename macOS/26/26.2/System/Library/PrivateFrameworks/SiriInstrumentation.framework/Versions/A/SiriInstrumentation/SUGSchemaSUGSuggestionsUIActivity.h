@class NSArray, NSData, SISchemaUUID;

@interface SUGSchemaSUGSuggestionsUIActivity : SISchemaInstrumentationMessage {
    struct { unsigned char deliveryVehicle : 1; unsigned char uiActivity : 1; } _has;
}

@property (copy, nonatomic) NSArray *suggestionIds;
@property (nonatomic) int deliveryVehicle;
@property (nonatomic) BOOL hasDeliveryVehicle;
@property (nonatomic) int uiActivity;
@property (nonatomic) BOOL hasUiActivity;
@property (copy, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (void)addSuggestionIds:(id)a0;
- (void)clearSuggestionIds;
- (void)deleteDeliveryVehicle;
- (void)deleteLinkId;
- (void)deleteSuggestionIds;
- (void)deleteSuggestions;
- (void)deleteUiActivity;
- (id)suggestionIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionIdsCount;

@end
