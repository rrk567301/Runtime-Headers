@class NSData, CAMSchemaCAMAggregateFeatureValue;

@interface CAMSchemaCAMAutoSendFeaturesGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScore;
@property (nonatomic) char hasUserAsrScore;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreWhenCompleted;
@property (nonatomic) char hasUserAsrScoreWhenCompleted;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreWhenRejected;
@property (nonatomic) char hasUserAsrScoreWhenRejected;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreTargetContact;
@property (nonatomic) char hasUserAsrScoreTargetContact;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userAsrScoreTargetApp;
@property (nonatomic) char hasUserAsrScoreTargetApp;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRate;
@property (nonatomic) char hasUserRejectRate;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateTargetContact;
@property (nonatomic) char hasUserRejectRateTargetContact;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateTargetApp;
@property (nonatomic) char hasUserRejectRateTargetApp;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateWhenSkipDecision;
@property (nonatomic) char hasUserRejectRateWhenSkipDecision;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userRejectRateWhenConfirmDecision;
@property (nonatomic) char hasUserRejectRateWhenConfirmDecision;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharacters;
@property (nonatomic) char hasUserPayloadLengthInCharacters;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersTargetContact;
@property (nonatomic) char hasUserPayloadLengthInCharactersTargetContact;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersTargetApp;
@property (nonatomic) char hasUserPayloadLengthInCharactersTargetApp;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersWhenCompleted;
@property (nonatomic) char hasUserPayloadLengthInCharactersWhenCompleted;
@property (retain, nonatomic) CAMSchemaCAMAggregateFeatureValue *userPayloadLengthInCharactersWhenRejected;
@property (nonatomic) char hasUserPayloadLengthInCharactersWhenRejected;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUserAsrScoreTargetContact;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteUserAsrScoreWhenCompleted;
- (void)deleteUserAsrScore;
- (void)deleteUserAsrScoreTargetApp;
- (void)deleteUserAsrScoreWhenRejected;
- (void)deleteUserPayloadLengthInCharacters;
- (void)deleteUserPayloadLengthInCharactersTargetApp;
- (void)deleteUserPayloadLengthInCharactersTargetContact;
- (void)deleteUserPayloadLengthInCharactersWhenCompleted;
- (void)deleteUserPayloadLengthInCharactersWhenRejected;
- (void)deleteUserRejectRate;
- (void)deleteUserRejectRateTargetApp;
- (void)deleteUserRejectRateTargetContact;
- (void)deleteUserRejectRateWhenConfirmDecision;
- (void)deleteUserRejectRateWhenSkipDecision;
- (id)suppressMessageUnderConditions;

@end
