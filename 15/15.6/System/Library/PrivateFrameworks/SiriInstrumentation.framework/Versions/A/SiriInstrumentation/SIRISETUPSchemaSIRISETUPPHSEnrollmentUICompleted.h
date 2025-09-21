@class SISchemaISOLocale, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUICompleted : SISchemaInstrumentationMessage {
    struct { unsigned char enrollmentMode : 1; unsigned char enrollmentOutcome : 1; unsigned char pageNumber : 1; } _has;
}

@property (nonatomic) int enrollmentMode;
@property (nonatomic) char hasEnrollmentMode;
@property (retain, nonatomic) SISchemaISOLocale *locale;
@property (nonatomic) char hasLocale;
@property (nonatomic) int enrollmentOutcome;
@property (nonatomic) char hasEnrollmentOutcome;
@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) char hasPageNumber;
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
- (void)deleteEnrollmentOutcome;
- (void)deleteLocale;
- (void)deletePageNumber;
- (id)suppressMessageUnderConditions;

@end
