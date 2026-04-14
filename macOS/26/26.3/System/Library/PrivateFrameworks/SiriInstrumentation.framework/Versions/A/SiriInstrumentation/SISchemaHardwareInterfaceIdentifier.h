@class NSString, NSData;

@interface SISchemaHardwareInterfaceIdentifier : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *interfaceVendorID;
@property (nonatomic) BOOL hasInterfaceVendorID;
@property (copy, nonatomic) NSString *interfaceProductID;
@property (nonatomic) BOOL hasInterfaceProductID;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteInterfaceProductID;
- (void)deleteInterfaceVendorID;

@end
