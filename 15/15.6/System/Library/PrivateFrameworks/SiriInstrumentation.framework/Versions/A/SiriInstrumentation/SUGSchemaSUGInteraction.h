@class NSString, NSData;

@interface SUGSchemaSUGInteraction : SISchemaInstrumentationMessage {
    struct { unsigned char relatedSuggestionEventSequenceNum : 1; unsigned char relatedSuggestionsShownCount : 1; unsigned char hasOccurredWithinHour : 1; unsigned char triggerType : 1; } _has;
}

@property (copy, nonatomic) NSString *relatedSuggestionId;
@property (nonatomic) char hasRelatedSuggestionId;
@property (nonatomic) unsigned int relatedSuggestionEventSequenceNum;
@property (nonatomic) char hasRelatedSuggestionEventSequenceNum;
@property (nonatomic) unsigned int relatedSuggestionsShownCount;
@property (nonatomic) char hasRelatedSuggestionsShownCount;
@property (nonatomic) char hasOccurredWithinHour;
@property (nonatomic) char hasHasOccurredWithinHour;
@property (nonatomic) int triggerType;
@property (nonatomic) char hasTriggerType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasOccurredWithinHour;
- (void)deleteRelatedSuggestionEventSequenceNum;
- (void)deleteRelatedSuggestionId;
- (void)deleteRelatedSuggestionsShownCount;
- (void)deleteTriggerType;
- (id)suppressMessageUnderConditions;

@end
