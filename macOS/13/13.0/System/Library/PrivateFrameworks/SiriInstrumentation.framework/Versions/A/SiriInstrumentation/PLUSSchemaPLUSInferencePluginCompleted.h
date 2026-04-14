@class NSData;

@interface PLUSSchemaPLUSInferencePluginCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfConversationsReviewed : 1; unsigned char numberOfGroundTruthsGenerated : 1; unsigned char numberOfContactSuggestionsGenerated : 1; unsigned char numberOfContactSuggestionsUpdated : 1; unsigned char numberOfContactSuggestionsRemoved : 1; unsigned char numberOfTurnsReviewed : 1; } _has;
}

@property (nonatomic) unsigned int numberOfConversationsReviewed;
@property (nonatomic) BOOL hasNumberOfConversationsReviewed;
@property (nonatomic) unsigned int numberOfGroundTruthsGenerated;
@property (nonatomic) BOOL hasNumberOfGroundTruthsGenerated;
@property (nonatomic) unsigned int numberOfContactSuggestionsGenerated;
@property (nonatomic) BOOL hasNumberOfContactSuggestionsGenerated;
@property (nonatomic) unsigned int numberOfContactSuggestionsUpdated;
@property (nonatomic) BOOL hasNumberOfContactSuggestionsUpdated;
@property (nonatomic) unsigned int numberOfContactSuggestionsRemoved;
@property (nonatomic) BOOL hasNumberOfContactSuggestionsRemoved;
@property (nonatomic) unsigned int numberOfTurnsReviewed;
@property (nonatomic) BOOL hasNumberOfTurnsReviewed;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteNumberOfConversationsReviewed;
- (void)deleteNumberOfGroundTruthsGenerated;
- (void)deleteNumberOfContactSuggestionsGenerated;
- (void)deleteNumberOfContactSuggestionsUpdated;
- (void)deleteNumberOfContactSuggestionsRemoved;
- (void)deleteNumberOfTurnsReviewed;

@end
