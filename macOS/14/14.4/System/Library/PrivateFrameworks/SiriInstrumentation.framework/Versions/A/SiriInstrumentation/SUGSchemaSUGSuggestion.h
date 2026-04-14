@class NSString, NSData, SUGSchemaSUGSuppressionResult, SUGSchemaSUGSiriHelpSignal;

@interface SUGSchemaSUGSuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char deliveryVehicle : 1; unsigned char goal : 1; unsigned char finalRank : 1; unsigned char goalSpecificScore : 1; unsigned char finalScore : 1; unsigned char suggestionTier : 1; } _has;
}

@property (copy, nonatomic) NSString *suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (retain, nonatomic) SUGSchemaSUGSiriHelpSignal *subscribedSignal;
@property (nonatomic) BOOL hasSubscribedSignal;
@property (nonatomic) int deliveryVehicle;
@property (nonatomic) BOOL hasDeliveryVehicle;
@property (nonatomic) int goal;
@property (nonatomic) BOOL hasGoal;
@property (nonatomic) unsigned int finalRank;
@property (nonatomic) BOOL hasFinalRank;
@property (nonatomic) double goalSpecificScore;
@property (nonatomic) BOOL hasGoalSpecificScore;
@property (nonatomic) double finalScore;
@property (nonatomic) BOOL hasFinalScore;
@property (nonatomic) int suggestionTier;
@property (nonatomic) BOOL hasSuggestionTier;
@property (retain, nonatomic) SUGSchemaSUGSuppressionResult *suppressionResult;
@property (nonatomic) BOOL hasSuppressionResult;
@property (copy, nonatomic) NSString *loggingActionId;
@property (nonatomic) BOOL hasLoggingActionId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFinalRank;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDeliveryVehicle;
- (void)deleteFinalScore;
- (void)deleteGoal;
- (void)deleteGoalSpecificScore;
- (void)deleteLoggingActionId;
- (void)deleteSubscribedSignal;
- (void)deleteSuggestionId;
- (void)deleteSuggestionTier;
- (void)deleteSuppressionResult;
- (id)suppressMessageUnderConditions;

@end
