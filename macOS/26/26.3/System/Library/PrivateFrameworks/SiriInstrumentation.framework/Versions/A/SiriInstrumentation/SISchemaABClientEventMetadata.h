@class NSData, SISchemaUUID;

@interface SISchemaABClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char timeIntervalSince1970 : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *siriDeviceId;
@property (nonatomic) BOOL hasSiriDeviceId;
@property (retain, nonatomic) SISchemaUUID *speechId;
@property (nonatomic) BOOL hasSpeechId;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) BOOL hasTimeIntervalSince1970;
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
- (void)deleteSiriDeviceId;
- (void)deleteSpeechId;
- (void)deleteTimeIntervalSince1970;

@end
