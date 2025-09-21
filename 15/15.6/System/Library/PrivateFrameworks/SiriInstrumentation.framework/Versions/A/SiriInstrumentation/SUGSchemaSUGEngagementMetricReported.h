@class NSString, NSData;

@interface SUGSchemaSUGEngagementMetricReported : SISchemaInstrumentationMessage {
    struct { unsigned char numberSuggestionShownBefore : 1; unsigned char hasConversion : 1; unsigned char secondsToConversion : 1; unsigned char numberOfActionsBefore : 1; unsigned char numberOfActionsAfter : 1; unsigned char daysBucketType : 1; unsigned char conversionMetricType : 1; } _has;
}

@property (copy, nonatomic) NSString *suggestionId;
@property (nonatomic) char hasSuggestionId;
@property (copy, nonatomic) NSString *loggingActionId;
@property (nonatomic) char hasLoggingActionId;
@property (nonatomic) unsigned int numberSuggestionShownBefore;
@property (nonatomic) char hasNumberSuggestionShownBefore;
@property (nonatomic) char hasConversion;
@property (nonatomic) char hasHasConversion;
@property (nonatomic) unsigned int secondsToConversion;
@property (nonatomic) char hasSecondsToConversion;
@property (nonatomic) unsigned int numberOfActionsBefore;
@property (nonatomic) char hasNumberOfActionsBefore;
@property (nonatomic) unsigned int numberOfActionsAfter;
@property (nonatomic) char hasNumberOfActionsAfter;
@property (nonatomic) int daysBucketType;
@property (nonatomic) char hasDaysBucketType;
@property (nonatomic) int conversionMetricType;
@property (nonatomic) char hasConversionMetricType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConversionMetricType;
- (void)deleteDaysBucketType;
- (void)deleteHasConversion;
- (void)deleteLoggingActionId;
- (void)deleteNumberOfActionsAfter;
- (void)deleteNumberOfActionsBefore;
- (void)deleteNumberSuggestionShownBefore;
- (void)deleteSecondsToConversion;
- (void)deleteSuggestionId;
- (id)suppressMessageUnderConditions;

@end
