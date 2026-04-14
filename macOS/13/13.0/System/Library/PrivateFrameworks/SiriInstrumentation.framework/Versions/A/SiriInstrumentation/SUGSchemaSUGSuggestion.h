@class NSString, NSData, SUGSchemaSUGSiriHelpSignal;

@interface SUGSchemaSUGSuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char deliveryVehicle : 1; unsigned char goal : 1; unsigned char finalRank : 1; unsigned char goalSpecificScore : 1; unsigned char finalScore : 1; } _has;
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
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteSuggestionId;
- (void)deleteSubscribedSignal;
- (void)deleteDeliveryVehicle;
- (void)deleteGoal;
- (void)deleteFinalRank;
- (void)deleteGoalSpecificScore;
- (void)deleteFinalScore;

@end
