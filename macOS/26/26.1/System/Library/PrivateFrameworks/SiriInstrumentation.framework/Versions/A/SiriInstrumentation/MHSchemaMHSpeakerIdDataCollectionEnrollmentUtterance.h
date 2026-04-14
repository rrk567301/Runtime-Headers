@class NSData, SISchemaUUID;

@interface MHSchemaMHSpeakerIdDataCollectionEnrollmentUtterance : SISchemaInstrumentationMessage {
    struct { unsigned char approximateGenerationTimeStamp : 1; unsigned char triggerPhrase : 1; } _has;
}

@property (nonatomic) unsigned long long approximateGenerationTimeStamp;
@property (nonatomic) BOOL hasApproximateGenerationTimeStamp;
@property (nonatomic) int triggerPhrase;
@property (nonatomic) BOOL hasTriggerPhrase;
@property (retain, nonatomic) SISchemaUUID *enrollmentDonationId;
@property (nonatomic) BOOL hasEnrollmentDonationId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteApproximateGenerationTimeStamp;
- (void)deleteEnrollmentDonationId;
- (void)deleteTriggerPhrase;

@end
