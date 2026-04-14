@class NSData;

@interface MHSchemaMHSensorControlStatusReported : SISchemaInstrumentationMessage {
    struct { unsigned char sensorControlStatus : 1; } _has;
}

@property (nonatomic) int sensorControlStatus;
@property (nonatomic) BOOL hasSensorControlStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSensorControlStatus;
- (id)suppressMessageUnderConditions;

@end
