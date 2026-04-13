@class NSData;

@interface PLUSSchemaPLUSInferencePluginCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfConversationsReviewed : 1; unsigned char numberOfGroundTruthsGenerated : 1; unsigned char numberOfContactSuggestionsGenerated : 1; unsigned char numberOfContactSuggestionsUpdated : 1; } _has;
}

@property (nonatomic) unsigned int numberOfConversationsReviewed;
@property (nonatomic) BOOL hasNumberOfConversationsReviewed;
@property (nonatomic) unsigned int numberOfGroundTruthsGenerated;
@property (nonatomic) BOOL hasNumberOfGroundTruthsGenerated;
@property (nonatomic) unsigned int numberOfContactSuggestionsGenerated;
@property (nonatomic) BOOL hasNumberOfContactSuggestionsGenerated;
@property (nonatomic) unsigned int numberOfContactSuggestionsUpdated;
@property (nonatomic) BOOL hasNumberOfContactSuggestionsUpdated;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
