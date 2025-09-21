@class SISchemaISOLocale, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUIStarted : SISchemaInstrumentationMessage {
    struct { unsigned char enrollmentMode : 1; unsigned char voiceTriggerType : 1; } _has;
}

@property (nonatomic) int enrollmentMode;
@property (nonatomic) char hasEnrollmentMode;
@property (nonatomic) int voiceTriggerType;
@property (nonatomic) char hasVoiceTriggerType;
@property (retain, nonatomic) SISchemaISOLocale *locale;
@property (nonatomic) char hasLocale;
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
- (void)deleteLocale;
- (void)deleteVoiceTriggerType;
- (id)suppressMessageUnderConditions;

@end
