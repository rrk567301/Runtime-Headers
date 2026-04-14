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
- (void)deleteApproximateGenerationTimeStamp;
- (void)deleteEnrollmentDonationId;
- (void)deleteTriggerPhrase;

@end
