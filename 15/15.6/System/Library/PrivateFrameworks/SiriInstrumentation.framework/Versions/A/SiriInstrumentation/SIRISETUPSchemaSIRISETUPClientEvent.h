@class SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceDetected, SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted, SISchemaInstrumentationMessage, SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted, SIRISETUPSchemaSIRISETUPPHSEnrollmentUIStarted, SIRISETUPSchemaSIRISETUPPHSEnrollmentUIUtteranceTrainingAttempted, NSData, SIRISETUPSchemaSIRISETUPPHSEnrollmentSessionSummary, SIRISETUPSchemaSIRISETUPClientEventMetadata, SIRISETUPSchemaSIRISETUPPHSEnrollmentUICompleted;

@interface SIRISETUPSchemaSIRISETUPClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPClientEventMetadata *eventMetadata;
@property (nonatomic) char hasEventMetadata;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted *enrollmentZeroDetectionCompleted;
@property (nonatomic) char hasEnrollmentZeroDetectionCompleted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted *enrollmentUtteranceCompleted;
@property (nonatomic) char hasEnrollmentUtteranceCompleted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceDetected *enrollmentUtteranceDetected;
@property (nonatomic) char hasEnrollmentUtteranceDetected;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUIStarted *enrollmentUIStarted;
@property (nonatomic) char hasEnrollmentUIStarted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUIUtteranceTrainingAttempted *enrollmentUIUtteranceTrainingAttempted;
@property (nonatomic) char hasEnrollmentUIUtteranceTrainingAttempted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUICompleted *enrollmentUICompleted;
@property (nonatomic) char hasEnrollmentUICompleted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentSessionSummary *sessionSummary;
@property (nonatomic) char hasSessionSummary;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteEnrollmentUICompleted;
- (void)deleteEnrollmentUIStarted;
- (void)deleteEnrollmentUIUtteranceTrainingAttempted;
- (void)deleteEnrollmentUtteranceCompleted;
- (void)deleteEnrollmentUtteranceDetected;
- (void)deleteEnrollmentZeroDetectionCompleted;
- (void)deleteEventMetadata;
- (void)deleteSessionSummary;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
