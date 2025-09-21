@class NSString, NSData, SISchemaUUID;

@interface CDASchemaCDAUserFeedbackCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char userFeedbackStatus : 1; unsigned char isCorrectDeviceSelected : 1; unsigned char userReportedResponseDeviceDistance : 1; unsigned char dataCollectionGroup : 1; unsigned char hasResponseFromMultipleDevices : 1; } _has;
}

@property (copy, nonatomic) NSString *surveyId;
@property (nonatomic) char hasSurveyId;
@property (nonatomic) int userFeedbackStatus;
@property (nonatomic) char hasUserFeedbackStatus;
@property (nonatomic) char isCorrectDeviceSelected;
@property (nonatomic) char hasIsCorrectDeviceSelected;
@property (retain, nonatomic) SISchemaUUID *expectedWinnerSiriSpeechId;
@property (nonatomic) char hasExpectedWinnerSiriSpeechId;
@property (copy, nonatomic) NSString *failureReasonCategory;
@property (nonatomic) char hasFailureReasonCategory;
@property (nonatomic) double userReportedResponseDeviceDistance;
@property (nonatomic) char hasUserReportedResponseDeviceDistance;
@property (nonatomic) int dataCollectionGroup;
@property (nonatomic) char hasDataCollectionGroup;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (nonatomic) char hasResponseFromMultipleDevices;
@property (nonatomic) char hasHasResponseFromMultipleDevices;
@property (retain, nonatomic) SISchemaUUID *expectedWinnerElectionParticipantId;
@property (nonatomic) char hasExpectedWinnerElectionParticipantId;
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
- (void)deleteDataCollectionGroup;
- (void)deleteExpectedWinnerElectionParticipantId;
- (void)deleteExpectedWinnerSiriSpeechId;
- (void)deleteExperimentId;
- (void)deleteFailureReasonCategory;
- (void)deleteHasResponseFromMultipleDevices;
- (void)deleteIsCorrectDeviceSelected;
- (void)deleteSurveyId;
- (void)deleteUserFeedbackStatus;
- (void)deleteUserReportedResponseDeviceDistance;
- (id)suppressMessageUnderConditions;

@end
