@class SISchemaISOLocale, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUIUtteranceTrainingAttempted : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char enrollmentMode : 1; unsigned char isRetry : 1; unsigned char trainingOutcome : 1; unsigned char wasAudioHintNeeded : 1; unsigned char wasAudioHintSpokenSuccessfully : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) char hasPageNumber;
@property (nonatomic) int enrollmentMode;
@property (nonatomic) char hasEnrollmentMode;
@property (retain, nonatomic) SISchemaISOLocale *locale;
@property (nonatomic) char hasLocale;
@property (nonatomic) char isRetry;
@property (nonatomic) char hasIsRetry;
@property (nonatomic) int trainingOutcome;
@property (nonatomic) char hasTrainingOutcome;
@property (nonatomic) char wasAudioHintNeeded;
@property (nonatomic) char hasWasAudioHintNeeded;
@property (nonatomic) char wasAudioHintSpokenSuccessfully;
@property (nonatomic) char hasWasAudioHintSpokenSuccessfully;
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
- (void)deleteEnrollmentMode;
- (void)deleteIsRetry;
- (void)deleteLocale;
- (void)deletePageNumber;
- (void)deleteTrainingOutcome;
- (void)deleteWasAudioHintNeeded;
- (void)deleteWasAudioHintSpokenSuccessfully;
- (id)suppressMessageUnderConditions;

@end
