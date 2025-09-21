@class NSData, SISchemaUUID;

@interface ORCHSchemaORCHMUXEphemeralToAggregationIdentifierMap : SISchemaInstrumentationMessage {
    struct { unsigned char userAggregationIdRotationTimestampMs : 1; unsigned char userAggregationIdExpirationTimestampMs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *userEphemeralId;
@property (nonatomic) char hasUserEphemeralId;
@property (retain, nonatomic) SISchemaUUID *userAggregationId;
@property (nonatomic) char hasUserAggregationId;
@property (nonatomic) unsigned long long userAggregationIdRotationTimestampMs;
@property (nonatomic) char hasUserAggregationIdRotationTimestampMs;
@property (nonatomic) unsigned long long userAggregationIdExpirationTimestampMs;
@property (nonatomic) char hasUserAggregationIdExpirationTimestampMs;
@property (retain, nonatomic) SISchemaUUID *deviceAggregationId;
@property (nonatomic) char hasDeviceAggregationId;
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
- (void)deleteDeviceAggregationId;
- (void)deleteUserAggregationId;
- (void)deleteUserAggregationIdExpirationTimestampMs;
- (void)deleteUserAggregationIdRotationTimestampMs;
- (void)deleteUserEphemeralId;
- (id)suppressMessageUnderConditions;

@end
