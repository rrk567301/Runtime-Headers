@class NSData;

@interface HALSchemaHALAlarmContext : SISchemaInstrumentationMessage {
    struct { unsigned char timeSinceAlarmFiredInSeconds : 1; } _has;
}

@property (nonatomic) unsigned long long timeSinceAlarmFiredInSeconds;
@property (nonatomic) char hasTimeSinceAlarmFiredInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTimeSinceAlarmFiredInSeconds;
- (id)suppressMessageUnderConditions;

@end
