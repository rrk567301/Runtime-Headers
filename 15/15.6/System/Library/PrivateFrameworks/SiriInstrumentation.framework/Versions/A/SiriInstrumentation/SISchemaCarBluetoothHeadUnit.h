@class NSString, NSData;

@interface SISchemaCarBluetoothHeadUnit : SISchemaInstrumentationMessage {
    struct { unsigned char carYear : 1; } _has;
}

@property (copy, nonatomic) NSString *headUnitVendorId;
@property (nonatomic) char hasHeadUnitVendorId;
@property (copy, nonatomic) NSString *headUnitProductId;
@property (nonatomic) char hasHeadUnitProductId;
@property (copy, nonatomic) NSString *carMake;
@property (nonatomic) char hasCarMake;
@property (copy, nonatomic) NSString *carModel;
@property (nonatomic) char hasCarModel;
@property (nonatomic) unsigned int carYear;
@property (nonatomic) char hasCarYear;
@property (copy, nonatomic) NSString *organizationallyUniqueId;
@property (nonatomic) char hasOrganizationallyUniqueId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCarMake;
- (void)deleteCarModel;
- (void)deleteCarYear;
- (void)deleteHeadUnitProductId;
- (void)deleteHeadUnitVendorId;
- (void)deleteOrganizationallyUniqueId;
- (id)suppressMessageUnderConditions;

@end
