@class NSData, ODFUNNELSiriSchemaODFUNNELCoreDimensions;

@interface ODFUNNELSiriSchemaODFUNNELVoiceTriggerEnrollmentDimensions : SISchemaInstrumentationMessage {
    struct { unsigned char enrollmentMode : 1; unsigned char voiceTriggerType : 1; unsigned char enrollmentOutcome : 1; unsigned char pageNumberCompleted : 1; unsigned char trainingOutcome : 1; } _has;
}

@property (retain, nonatomic) ODFUNNELSiriSchemaODFUNNELCoreDimensions *coreDimensions;
@property (nonatomic) char hasCoreDimensions;
@property (nonatomic) int enrollmentMode;
@property (nonatomic) char hasEnrollmentMode;
@property (nonatomic) int voiceTriggerType;
@property (nonatomic) char hasVoiceTriggerType;
@property (nonatomic) int enrollmentOutcome;
@property (nonatomic) char hasEnrollmentOutcome;
@property (nonatomic) unsigned int pageNumberCompleted;
@property (nonatomic) char hasPageNumberCompleted;
@property (nonatomic) int trainingOutcome;
@property (nonatomic) char hasTrainingOutcome;
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
- (void)deleteCoreDimensions;
- (void)deleteEnrollmentMode;
- (void)deleteEnrollmentOutcome;
- (void)deletePageNumberCompleted;
- (void)deleteTrainingOutcome;
- (void)deleteVoiceTriggerType;
- (id)suppressMessageUnderConditions;

@end
