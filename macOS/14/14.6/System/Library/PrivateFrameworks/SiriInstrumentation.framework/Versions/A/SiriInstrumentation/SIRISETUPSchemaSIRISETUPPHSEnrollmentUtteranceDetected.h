@class NSData, SISchemaUUID;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceDetected : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) BOOL hasPageNumber;
@property (retain, nonatomic) SISchemaUUID *audioId;
@property (nonatomic) BOOL hasAudioId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAudioId;
- (void)deletePageNumber;
- (id)suppressMessageUnderConditions;

@end
