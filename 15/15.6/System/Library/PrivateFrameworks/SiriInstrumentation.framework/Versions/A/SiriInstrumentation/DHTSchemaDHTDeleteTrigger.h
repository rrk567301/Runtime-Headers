@class NSData, SISchemaUUID;

@interface DHTSchemaDHTDeleteTrigger : SISchemaInstrumentationMessage {
    struct { unsigned char deleteTimestampMs : 1; unsigned char deletionTriggerEvent : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *id;
@property (nonatomic) char hasId;
@property (retain, nonatomic) SISchemaUUID *speechId;
@property (nonatomic) char hasSpeechId;
@property (retain, nonatomic) SISchemaUUID *siriDeviceId;
@property (nonatomic) char hasSiriDeviceId;
@property (nonatomic) unsigned long long deleteTimestampMs;
@property (nonatomic) char hasDeleteTimestampMs;
@property (nonatomic) int deletionTriggerEvent;
@property (nonatomic) char hasDeletionTriggerEvent;
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
- (void)deleteDeleteTimestampMs;
- (void)deleteDeletionTriggerEvent;
- (void)deleteId;
- (void)deleteSiriDeviceId;
- (void)deleteSpeechId;
- (id)suppressMessageUnderConditions;

@end
