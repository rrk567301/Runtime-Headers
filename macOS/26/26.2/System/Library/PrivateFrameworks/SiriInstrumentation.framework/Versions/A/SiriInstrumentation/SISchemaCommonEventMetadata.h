@class SISchemaLogicalTimestamp, NSData, SISchemaUUID;

@interface SISchemaCommonEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char emitTimestamp : 1; } _has;
}

@property (retain, nonatomic) SISchemaLogicalTimestamp *timestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) SISchemaUUID *testFingerprint;
@property (nonatomic) BOOL hasTestFingerprint;
@property (retain, nonatomic) SISchemaUUID *eventId;
@property (nonatomic) BOOL hasEventId;
@property (nonatomic) long long emitTimestamp;
@property (nonatomic) BOOL hasEmitTimestamp;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteTimestamp;
- (void)deleteEmitTimestamp;
- (void)deleteEventId;
- (void)deleteTestFingerprint;

@end
