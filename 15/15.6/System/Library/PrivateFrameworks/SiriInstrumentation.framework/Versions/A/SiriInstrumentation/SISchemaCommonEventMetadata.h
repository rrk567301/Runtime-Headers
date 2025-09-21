@class SISchemaLogicalTimestamp, NSData, SISchemaUUID;

@interface SISchemaCommonEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char emitTimestamp : 1; } _has;
}

@property (retain, nonatomic) SISchemaLogicalTimestamp *timestamp;
@property (nonatomic) char hasTimestamp;
@property (retain, nonatomic) SISchemaUUID *testFingerprint;
@property (nonatomic) char hasTestFingerprint;
@property (retain, nonatomic) SISchemaUUID *eventId;
@property (nonatomic) char hasEventId;
@property (nonatomic) long long emitTimestamp;
@property (nonatomic) char hasEmitTimestamp;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTimestamp;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEmitTimestamp;
- (void)deleteEventId;
- (void)deleteTestFingerprint;
- (id)suppressMessageUnderConditions;

@end
