@class NSString, NSData;

@interface SISchemaCarBluetoothHeadUnit : SISchemaInstrumentationMessage {
    struct { unsigned char carYear : 1; } _has;
}

@property (copy, nonatomic) NSString *headUnitVendorId;
@property (nonatomic) BOOL hasHeadUnitVendorId;
@property (copy, nonatomic) NSString *headUnitProductId;
@property (nonatomic) BOOL hasHeadUnitProductId;
@property (copy, nonatomic) NSString *carMake;
@property (nonatomic) BOOL hasCarMake;
@property (copy, nonatomic) NSString *carModel;
@property (nonatomic) BOOL hasCarModel;
@property (nonatomic) unsigned int carYear;
@property (nonatomic) BOOL hasCarYear;
@property (copy, nonatomic) NSString *organizationallyUniqueId;
@property (nonatomic) BOOL hasOrganizationallyUniqueId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteCarMake;
- (void)deleteCarModel;
- (void)deleteCarYear;
- (void)deleteHeadUnitProductId;
- (void)deleteHeadUnitVendorId;
- (void)deleteOrganizationallyUniqueId;

@end
