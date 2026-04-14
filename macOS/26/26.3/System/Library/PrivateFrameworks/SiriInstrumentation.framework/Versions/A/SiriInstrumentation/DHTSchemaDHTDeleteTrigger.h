@class NSData, SISchemaUUID;

@interface DHTSchemaDHTDeleteTrigger : SISchemaInstrumentationMessage {
    struct { unsigned char deleteTimestampMs : 1; unsigned char deletionTriggerEvent : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *id;
@property (nonatomic) BOOL hasId;
@property (retain, nonatomic) SISchemaUUID *speechId;
@property (nonatomic) BOOL hasSpeechId;
@property (retain, nonatomic) SISchemaUUID *siriDeviceId;
@property (nonatomic) BOOL hasSiriDeviceId;
@property (nonatomic) unsigned long long deleteTimestampMs;
@property (nonatomic) BOOL hasDeleteTimestampMs;
@property (nonatomic) int deletionTriggerEvent;
@property (nonatomic) BOOL hasDeletionTriggerEvent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteDeleteTimestampMs;
- (void)deleteDeletionTriggerEvent;
- (void)deleteId;
- (void)deleteSiriDeviceId;
- (void)deleteSpeechId;

@end
