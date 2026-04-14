@class NSString, NSData;

@interface SISchemaCarPlayHeadUnitContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *vehicleName;
@property (nonatomic) BOOL hasVehicleName;
@property (copy, nonatomic) NSString *vehicleModel;
@property (nonatomic) BOOL hasVehicleModel;
@property (copy, nonatomic) NSString *vehicleManufacturer;
@property (nonatomic) BOOL hasVehicleManufacturer;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteVehicleManufacturer;
- (void)deleteVehicleModel;
- (void)deleteVehicleName;

@end
