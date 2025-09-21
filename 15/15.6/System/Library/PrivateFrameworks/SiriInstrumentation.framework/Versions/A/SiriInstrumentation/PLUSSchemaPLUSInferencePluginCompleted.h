@class NSData;

@interface PLUSSchemaPLUSInferencePluginCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfConversationsReviewed : 1; unsigned char numberOfGroundTruthsGenerated : 1; unsigned char numberOfContactSuggestionsGenerated : 1; unsigned char numberOfContactSuggestionsUpdated : 1; unsigned char numberOfContactSuggestionsRemoved : 1; unsigned char numberOfTurnsReviewed : 1; } _has;
}

@property (nonatomic) unsigned int numberOfConversationsReviewed;
@property (nonatomic) char hasNumberOfConversationsReviewed;
@property (nonatomic) unsigned int numberOfGroundTruthsGenerated;
@property (nonatomic) char hasNumberOfGroundTruthsGenerated;
@property (nonatomic) unsigned int numberOfContactSuggestionsGenerated;
@property (nonatomic) char hasNumberOfContactSuggestionsGenerated;
@property (nonatomic) unsigned int numberOfContactSuggestionsUpdated;
@property (nonatomic) char hasNumberOfContactSuggestionsUpdated;
@property (nonatomic) unsigned int numberOfContactSuggestionsRemoved;
@property (nonatomic) char hasNumberOfContactSuggestionsRemoved;
@property (nonatomic) unsigned int numberOfTurnsReviewed;
@property (nonatomic) char hasNumberOfTurnsReviewed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumberOfContactSuggestionsGenerated;
- (void)deleteNumberOfContactSuggestionsRemoved;
- (void)deleteNumberOfContactSuggestionsUpdated;
- (void)deleteNumberOfConversationsReviewed;
- (void)deleteNumberOfGroundTruthsGenerated;
- (void)deleteNumberOfTurnsReviewed;
- (id)suppressMessageUnderConditions;

@end
