@class NSData;

@interface ORCHSchemaORCHDeviceDynamicContext : SISchemaInstrumentationMessage {
    struct { unsigned char thermalState : 1; } _has;
}

@property (nonatomic) int thermalState;
@property (nonatomic) BOOL hasThermalState;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteThermalState;
- (id)suppressMessageUnderConditions;

@end
