@class SISchemaISOLocale, NSData, SISchemaUUID;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceDetected : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char triggerPhrase : 1; unsigned char enrollmentDate : 1; unsigned char utteranceEnrollSuccess : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) char hasPageNumber;
@property (retain, nonatomic) SISchemaUUID *audioId;
@property (nonatomic) char hasAudioId;
@property (nonatomic) int triggerPhrase;
@property (nonatomic) char hasTriggerPhrase;
@property (retain, nonatomic) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) char hasSiriInputLocale;
@property (nonatomic) unsigned long long enrollmentDate;
@property (nonatomic) char hasEnrollmentDate;
@property (nonatomic) char utteranceEnrollSuccess;
@property (nonatomic) char hasUtteranceEnrollSuccess;
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
- (void)deleteAudioId;
- (void)deleteEnrollmentDate;
- (void)deletePageNumber;
- (void)deleteSiriInputLocale;
- (void)deleteTriggerPhrase;
- (void)deleteUtteranceEnrollSuccess;
- (id)suppressMessageUnderConditions;

@end
