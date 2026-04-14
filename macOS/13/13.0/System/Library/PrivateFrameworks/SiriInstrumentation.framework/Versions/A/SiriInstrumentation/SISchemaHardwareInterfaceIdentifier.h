@class NSString, NSData;

@interface SISchemaHardwareInterfaceIdentifier : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *interfaceVendorID;
@property (nonatomic) BOOL hasInterfaceVendorID;
@property (copy, nonatomic) NSString *interfaceProductID;
@property (nonatomic) BOOL hasInterfaceProductID;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteInterfaceVendorID;
- (void)deleteInterfaceProductID;

@end
