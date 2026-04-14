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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEnrollmentMode;
- (void)deleteLocale;
- (void)deleteVoiceTriggerType;

@end
