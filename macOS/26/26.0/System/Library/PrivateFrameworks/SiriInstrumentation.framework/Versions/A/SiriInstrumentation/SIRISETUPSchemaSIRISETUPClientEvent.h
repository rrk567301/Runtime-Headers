@class SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceDetected, SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted, SISchemaInstrumentationMessage, SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted, SIRISETUPSchemaSIRISETUPPHSEnrollmentUIStarted, SIRISETUPSchemaSIRISETUPPHSEnrollmentUIUtteranceTrainingAttempted, NSData, SIRISETUPSchemaSIRISETUPPHSEnrollmentSessionSummary, SIRISETUPSchemaSIRISETUPClientEventMetadata, SIRISETUPSchemaSIRISETUPPHSEnrollmentUICompleted;

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
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteEnrollmentUICompleted;
- (void)deleteEnrollmentUIStarted;
- (void)deleteEnrollmentUIUtteranceTrainingAttempted;
- (void)deleteEnrollmentUtteranceCompleted;
- (void)deleteEnrollmentUtteranceDetected;
- (void)deleteEnrollmentZeroDetectionCompleted;
- (void)deleteEventMetadata;
- (void)deleteSessionSummary;
- (id)getComponentId;
- (unsigned long long)whichInnerEventType;

@end
