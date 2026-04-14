@class NSData;

@interface HALSchemaHALAlarmContext : SISchemaInstrumentationMessage {
    struct { unsigned char timeSinceAlarmFiredInSeconds : 1; } _has;
}

@property (nonatomic) unsigned long long timeSinceAlarmFiredInSeconds;
@property (nonatomic) BOOL hasTimeSinceAlarmFiredInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteTimeSinceAlarmFiredInSeconds;

@end
