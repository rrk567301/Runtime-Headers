@class NSData, SISchemaUUID;

@interface SISchemaABSeverEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char timestampNs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *siriDeviceId;
@property (nonatomic) char hasSiriDeviceId;
@property (retain, nonatomic) SISchemaUUID *speechId;
@property (nonatomic) char hasSpeechId;
@property (nonatomic) long long timestampNs;
@property (nonatomic) char hasTimestampNs;
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
- (void)deleteSiriDeviceId;
- (void)deleteSpeechId;
- (void)deleteTimestampNs;
- (id)suppressMessageUnderConditions;

@end
