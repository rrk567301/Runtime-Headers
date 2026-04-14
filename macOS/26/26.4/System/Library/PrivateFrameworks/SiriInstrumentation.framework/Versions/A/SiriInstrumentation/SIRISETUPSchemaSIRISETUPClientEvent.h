@class SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceDetected, SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted, SISchemaInstrumentationMessage, SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted, SIRISETUPSchemaSIRISETUPPHSEnrollmentUIStarted, SIRISETUPSchemaSIRISETUPPHSEnrollmentUIUtteranceTrainingAttempted, SIRISETUPSchemaSIRISETUPCoreFollowUpPosted, SIRISETUPSchemaSIRISETUPPHSEnrollmentSessionSummary, SIRISETUPSchemaSIRISETUPOnboardingStarted, NSData, SIRISETUPSchemaSIRISETUPClientEventMetadata, SIRISETUPSchemaSIRISETUPPHSEnrollmentUICompleted;

@interface SIRISETUPSchemaSIRISETUPClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted *enrollmentZeroDetectionCompleted;
@property (nonatomic) BOOL hasEnrollmentZeroDetectionCompleted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted *enrollmentUtteranceCompleted;
@property (nonatomic) BOOL hasEnrollmentUtteranceCompleted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceDetected *enrollmentUtteranceDetected;
@property (nonatomic) BOOL hasEnrollmentUtteranceDetected;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUIStarted *enrollmentUIStarted;
@property (nonatomic) BOOL hasEnrollmentUIStarted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUIUtteranceTrainingAttempted *enrollmentUIUtteranceTrainingAttempted;
@property (nonatomic) BOOL hasEnrollmentUIUtteranceTrainingAttempted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUICompleted *enrollmentUICompleted;
@property (nonatomic) BOOL hasEnrollmentUICompleted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentSessionSummary *sessionSummary;
@property (nonatomic) BOOL hasSessionSummary;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPOnboardingStarted *onboardingStarted;
@property (nonatomic) BOOL hasOnboardingStarted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPCoreFollowUpPosted *coreFollowUpPosted;
@property (nonatomic) BOOL hasCoreFollowUpPosted;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)componentName;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCoreFollowUpPosted;
- (void)deleteEnrollmentUICompleted;
- (void)deleteEnrollmentUIStarted;
- (void)deleteEnrollmentUIUtteranceTrainingAttempted;
- (void)deleteEnrollmentUtteranceCompleted;
- (void)deleteEnrollmentUtteranceDetected;
- (void)deleteEnrollmentZeroDetectionCompleted;
- (void)deleteEventMetadata;
- (void)deleteOnboardingStarted;
- (void)deleteSessionSummary;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
