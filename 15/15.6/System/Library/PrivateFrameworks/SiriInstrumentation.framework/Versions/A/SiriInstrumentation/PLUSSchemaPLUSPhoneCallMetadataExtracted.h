@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSPhoneCallMetadataExtracted : SISchemaInstrumentationMessage {
    struct { unsigned char hasSiriResolvedContact : 1; unsigned char hasSiriInitiatedCall : 1; unsigned char hasUserMadeFollowupCallWithinDetectionWindow : 1; unsigned char hasUserMadeFollowupCallWithinEvaluationWindow : 1; unsigned char siriAndFollowupContactComparison : 1; unsigned char siriCallDuration : 1; unsigned char siriCallTimeToHangup : 1; unsigned char userTimeToFollowup : 1; unsigned char isSameCallRouteForSiriAndFollowup : 1; unsigned char isSameCallCapabilityForFollowup : 1; unsigned char followupNameSimilarity : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) char hasOriginalPlusId;
@property (nonatomic) char hasSiriResolvedContact;
@property (nonatomic) char hasHasSiriResolvedContact;
@property (nonatomic) char hasSiriInitiatedCall;
@property (nonatomic) char hasHasSiriInitiatedCall;
@property (nonatomic) char hasUserMadeFollowupCallWithinDetectionWindow;
@property (nonatomic) char hasHasUserMadeFollowupCallWithinDetectionWindow;
@property (nonatomic) char hasUserMadeFollowupCallWithinEvaluationWindow;
@property (nonatomic) char hasHasUserMadeFollowupCallWithinEvaluationWindow;
@property (nonatomic) int siriAndFollowupContactComparison;
@property (nonatomic) char hasSiriAndFollowupContactComparison;
@property (nonatomic) int siriCallDuration;
@property (nonatomic) char hasSiriCallDuration;
@property (nonatomic) int siriCallTimeToHangup;
@property (nonatomic) char hasSiriCallTimeToHangup;
@property (nonatomic) int userTimeToFollowup;
@property (nonatomic) char hasUserTimeToFollowup;
@property (nonatomic) char isSameCallRouteForSiriAndFollowup;
@property (nonatomic) char hasIsSameCallRouteForSiriAndFollowup;
@property (nonatomic) char isSameCallCapabilityForFollowup;
@property (nonatomic) char hasIsSameCallCapabilityForFollowup;
@property (nonatomic) int followupNameSimilarity;
@property (nonatomic) char hasFollowupNameSimilarity;
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
- (void)deleteFollowupNameSimilarity;
- (void)deleteHasSiriInitiatedCall;
- (void)deleteHasSiriResolvedContact;
- (void)deleteHasUserMadeFollowupCallWithinDetectionWindow;
- (void)deleteHasUserMadeFollowupCallWithinEvaluationWindow;
- (void)deleteIsSameCallCapabilityForFollowup;
- (void)deleteIsSameCallRouteForSiriAndFollowup;
- (void)deleteOriginalPlusId;
- (void)deleteSiriAndFollowupContactComparison;
- (void)deleteSiriCallDuration;
- (void)deleteSiriCallTimeToHangup;
- (void)deleteUserTimeToFollowup;
- (id)suppressMessageUnderConditions;

@end
