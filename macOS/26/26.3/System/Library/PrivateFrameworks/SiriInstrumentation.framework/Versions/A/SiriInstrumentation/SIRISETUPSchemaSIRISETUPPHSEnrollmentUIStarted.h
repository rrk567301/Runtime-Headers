@class SISchemaISOLocale, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUIStarted : SISchemaInstrumentationMessage {
    struct { unsigned char enrollmentMode : 1; unsigned char voiceTriggerType : 1; } _has;
}

@property (nonatomic) int enrollmentMode;
@property (nonatomic) BOOL hasEnrollmentMode;
@property (nonatomic) int voiceTriggerType;
@property (nonatomic) BOOL hasVoiceTriggerType;
@property (retain, nonatomic) SISchemaISOLocale *locale;
@property (nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteEnrollmentMode;
- (void)deleteLocale;
- (void)deleteVoiceTriggerType;

@end
