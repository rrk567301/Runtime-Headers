@class NSData;

@interface HALSchemaHALVoiceTriggerContext : SISchemaInstrumentationMessage {
    struct { unsigned char timeSinceVoiceTriggerHeardInSeconds : 1; } _has;
}

@property (nonatomic) unsigned long long timeSinceVoiceTriggerHeardInSeconds;
@property (nonatomic) char hasTimeSinceVoiceTriggerHeardInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTimeSinceVoiceTriggerHeardInSeconds;
- (id)suppressMessageUnderConditions;

@end
