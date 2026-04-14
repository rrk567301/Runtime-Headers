@class NSString, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDBluetoothCarDimensions : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAssistantDimensions *assistantDimensions;
@property (nonatomic) BOOL hasAssistantDimensions;
@property (copy, nonatomic) NSString *vehicleManufacturer;
@property (nonatomic) BOOL hasVehicleManufacturer;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAssistantDimensions;
- (void)deleteVehicleManufacturer;

@end
