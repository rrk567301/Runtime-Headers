@class NSString, NSData;

@interface SISchemaCarPlayHeadUnitContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *vehicleName;
@property (nonatomic) char hasVehicleName;
@property (copy, nonatomic) NSString *vehicleModel;
@property (nonatomic) char hasVehicleModel;
@property (copy, nonatomic) NSString *vehicleManufacturer;
@property (nonatomic) char hasVehicleManufacturer;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteVehicleManufacturer;
- (void)deleteVehicleModel;
- (void)deleteVehicleName;
- (id)suppressMessageUnderConditions;

@end
