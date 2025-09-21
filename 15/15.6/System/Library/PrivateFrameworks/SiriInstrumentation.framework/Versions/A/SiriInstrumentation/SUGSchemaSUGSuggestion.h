@class NSString, SUGSchemaSUGAutoCompleteSuggestionMetaData, NSData, SUGSchemaSUGSuppressionResult, SUGSchemaSUGSiriHelpSignal, SISchemaUUID;

@interface SUGSchemaSUGSuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char deliveryVehicle : 1; unsigned char goal : 1; unsigned char finalRank : 1; unsigned char goalSpecificScore : 1; unsigned char finalScore : 1; unsigned char suggestionTier : 1; unsigned char channel : 1; unsigned char channelScore : 1; unsigned char smartSuppressionScore : 1; unsigned char numWordsInSuggestion : 1; unsigned char numCharactersInSuggestion : 1; } _has;
}

@property (copy, nonatomic) NSString *suggestionId;
@property (nonatomic) char hasSuggestionId;
@property (retain, nonatomic) SUGSchemaSUGSiriHelpSignal *subscribedSignal;
@property (nonatomic) char hasSubscribedSignal;
@property (nonatomic) int deliveryVehicle;
@property (nonatomic) char hasDeliveryVehicle;
@property (nonatomic) int goal;
@property (nonatomic) char hasGoal;
@property (nonatomic) unsigned int finalRank;
@property (nonatomic) char hasFinalRank;
@property (nonatomic) double goalSpecificScore;
@property (nonatomic) char hasGoalSpecificScore;
@property (nonatomic) double finalScore;
@property (nonatomic) char hasFinalScore;
@property (nonatomic) int suggestionTier;
@property (nonatomic) char hasSuggestionTier;
@property (retain, nonatomic) SUGSchemaSUGSuppressionResult *suppressionResult;
@property (nonatomic) char hasSuppressionResult;
@property (copy, nonatomic) NSString *loggingActionId;
@property (nonatomic) char hasLoggingActionId;
@property (nonatomic) int channel;
@property (nonatomic) char hasChannel;
@property (nonatomic) double channelScore;
@property (nonatomic) char hasChannelScore;
@property (nonatomic) double smartSuppressionScore;
@property (nonatomic) char hasSmartSuppressionScore;
@property (nonatomic) int numWordsInSuggestion;
@property (nonatomic) char hasNumWordsInSuggestion;
@property (nonatomic) int numCharactersInSuggestion;
@property (nonatomic) char hasNumCharactersInSuggestion;
@property (retain, nonatomic) SUGSchemaSUGAutoCompleteSuggestionMetaData *autoCompleteSuggestionMetaData;
@property (nonatomic) char hasAutoCompleteSuggestionMetaData;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFinalRank;
- (void)deleteNumCharactersInSuggestion;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAutoCompleteSuggestionMetaData;
- (void)deleteChannel;
- (void)deleteChannelScore;
- (void)deleteDeliveryVehicle;
- (void)deleteFinalScore;
- (void)deleteGoal;
- (void)deleteGoalSpecificScore;
- (void)deleteLinkId;
- (void)deleteLoggingActionId;
- (void)deleteNumWordsInSuggestion;
- (void)deleteSmartSuppressionScore;
- (void)deleteSubscribedSignal;
- (void)deleteSuggestionId;
- (void)deleteSuggestionTier;
- (void)deleteSuppressionResult;
- (id)suppressMessageUnderConditions;

@end
