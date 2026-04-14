@class NSData, SISchemaUUID;

@interface JRSchemaHistoricalLocationContext : SISchemaInstrumentationMessage {
    struct { unsigned char logOfTimeElapsedInSeconds : 1; unsigned char bucketedDistance : 1; } _has;
}

@property (nonatomic) float logOfTimeElapsedInSeconds;
@property (nonatomic) BOOL hasLogOfTimeElapsedInSeconds;
@property (retain, nonatomic) SISchemaUUID *anonymizedLocationNameId;
@property (nonatomic) BOOL hasAnonymizedLocationNameId;
@property (retain, nonatomic) SISchemaUUID *anonymizedLocationTypeId;
@property (nonatomic) BOOL hasAnonymizedLocationTypeId;
@property (nonatomic) int bucketedDistance;
@property (nonatomic) BOOL hasBucketedDistance;
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
- (void)deleteLogOfTimeElapsedInSeconds;
- (void)deleteAnonymizedLocationNameId;
- (void)deleteAnonymizedLocationTypeId;
- (void)deleteBucketedDistance;

@end
