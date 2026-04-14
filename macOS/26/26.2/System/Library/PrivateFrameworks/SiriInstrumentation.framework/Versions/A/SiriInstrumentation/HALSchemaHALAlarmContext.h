@class NSData;

@interface HALSchemaHALAlarmContext : SISchemaInstrumentationMessage {
    struct { unsigned char timeSinceAlarmFiredInSeconds : 1; } _has;
}

@property (nonatomic) unsigned long long timeSinceAlarmFiredInSeconds;
@property (nonatomic) BOOL hasTimeSinceAlarmFiredInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteTimeSinceAlarmFiredInSeconds;

@end
