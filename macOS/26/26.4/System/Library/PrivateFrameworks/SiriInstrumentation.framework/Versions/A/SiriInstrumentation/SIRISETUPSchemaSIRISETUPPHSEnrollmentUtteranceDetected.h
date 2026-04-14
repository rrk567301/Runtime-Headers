@class SISchemaISOLocale, NSData, SISchemaUUID;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceDetected : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char triggerPhrase : 1; unsigned char enrollmentDate : 1; unsigned char utteranceEnrollSuccess : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) BOOL hasPageNumber;
@property (retain, nonatomic) SISchemaUUID *audioId;
@property (nonatomic) BOOL hasAudioId;
@property (nonatomic) int triggerPhrase;
@property (nonatomic) BOOL hasTriggerPhrase;
@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (nonatomic) unsigned long long enrollmentDate;
@property (nonatomic) BOOL hasEnrollmentDate;
@property (nonatomic) BOOL utteranceEnrollSuccess;
@property (nonatomic) BOOL hasUtteranceEnrollSuccess;
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
- (void)deleteAudioId;
- (void)deleteEnrollmentDate;
- (void)deletePageNumber;
- (void)deleteSiriInputLocale;
- (void)deleteTriggerPhrase;
- (void)deleteUtteranceEnrollSuccess;

@end
