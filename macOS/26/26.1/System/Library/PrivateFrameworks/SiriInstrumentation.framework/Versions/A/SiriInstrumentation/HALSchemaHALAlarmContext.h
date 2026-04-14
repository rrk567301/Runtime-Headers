@class NSData;

@interface HALSchemaHALAlarmContext : SISchemaInstrumentationMessage {
    struct { unsigned char timeSinceAlarmFiredInSeconds : 1; } _has;
}

@property (nonatomic) unsigned long long timeSinceAlarmFiredInSeconds;
@property (nonatomic) BOOL hasTimeSinceAlarmFiredInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteTimeSinceAlarmFiredInSeconds;

@end
