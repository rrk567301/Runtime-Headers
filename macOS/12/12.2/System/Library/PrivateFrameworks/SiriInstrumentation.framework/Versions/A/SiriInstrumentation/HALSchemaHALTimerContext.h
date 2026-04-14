@class NSData;

@interface HALSchemaHALTimerContext : SISchemaInstrumentationMessage {
    struct { unsigned char timeSinceTimerFiredInSeconds : 1; } _has;
}

@property (nonatomic) unsigned long long timeSinceTimerFiredInSeconds;
@property (nonatomic) BOOL hasTimeSinceTimerFiredInSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
