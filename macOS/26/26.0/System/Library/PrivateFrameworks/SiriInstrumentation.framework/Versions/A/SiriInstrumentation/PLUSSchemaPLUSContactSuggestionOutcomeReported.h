@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactSuggestionOutcomeReported : SISchemaInstrumentationMessage {
    struct { unsigned char contactSuggestionOutcome : 1; unsigned char contactSuggestionRedundancyState : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (nonatomic) int contactSuggestionOutcome;
@property (nonatomic) BOOL hasContactSuggestionOutcome;
@property (nonatomic) int contactSuggestionRedundancyState;
@property (nonatomic) BOOL hasContactSuggestionRedundancyState;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteContactSuggestionOutcome;
- (void)deleteContactSuggestionRedundancyState;
- (void)deleteSuggestionId;

@end
