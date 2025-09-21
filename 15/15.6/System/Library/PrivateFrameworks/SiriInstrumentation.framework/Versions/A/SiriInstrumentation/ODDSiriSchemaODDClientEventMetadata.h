@class ODDSiriSchemaODDTimeInterval, NSData, SISchemaUUID;

@interface ODDSiriSchemaODDClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char eventTimestampInMsSince1970 : 1; unsigned char userAggregationIdRotationTimestampMs : 1; unsigned char userAggregationIdExpirationTimestampMs : 1; unsigned char eventOrigin : 1; unsigned char isLongLivedIDUploadDisabled : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *oddId;
@property (nonatomic) char hasOddId;
@property (nonatomic) unsigned long long eventTimestampInMsSince1970;
@property (nonatomic) char hasEventTimestampInMsSince1970;
@property (retain, nonatomic) ODDSiriSchemaODDTimeInterval *aggregationInterval;
@property (nonatomic) char hasAggregationInterval;
@property (retain, nonatomic) SISchemaUUID *deviceAggregationId;
@property (nonatomic) char hasDeviceAggregationId;
@property (nonatomic) unsigned long long userAggregationIdRotationTimestampMs;
@property (nonatomic) char hasUserAggregationIdRotationTimestampMs;
@property (nonatomic) unsigned long long userAggregationIdExpirationTimestampMs;
@property (nonatomic) char hasUserAggregationIdExpirationTimestampMs;
@property (nonatomic) int eventOrigin;
@property (nonatomic) char hasEventOrigin;
@property (retain, nonatomic) SISchemaUUID *userAggregationId;
@property (nonatomic) char hasUserAggregationId;
@property (nonatomic) char isLongLivedIDUploadDisabled;
@property (nonatomic) char hasIsLongLivedIDUploadDisabled;
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
- (void)deleteAggregationInterval;
- (void)deleteDeviceAggregationId;
- (void)deleteEventOrigin;
- (void)deleteEventTimestampInMsSince1970;
- (void)deleteIsLongLivedIDUploadDisabled;
- (void)deleteOddId;
- (void)deleteUserAggregationId;
- (void)deleteUserAggregationIdExpirationTimestampMs;
- (void)deleteUserAggregationIdRotationTimestampMs;
- (id)suppressMessageUnderConditions;

@end
