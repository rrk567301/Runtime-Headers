@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactSuggestionOutcomeReported : SISchemaInstrumentationMessage {
    struct { unsigned char contactSuggestionOutcome : 1; unsigned char contactSuggestionRedundancyState : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) char hasSuggestionId;
@property (nonatomic) int contactSuggestionOutcome;
@property (nonatomic) char hasContactSuggestionOutcome;
@property (nonatomic) int contactSuggestionRedundancyState;
@property (nonatomic) char hasContactSuggestionRedundancyState;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteContactSuggestionOutcome;
- (void)deleteContactSuggestionRedundancyState;
- (void)deleteSuggestionId;
- (id)suppressMessageUnderConditions;

@end
