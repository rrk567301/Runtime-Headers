@class NSString, NSData;

@interface SISchemaHardwareInterfaceIdentifier : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *interfaceVendorID;
@property (nonatomic) BOOL hasInterfaceVendorID;
@property (copy, nonatomic) NSString *interfaceProductID;
@property (nonatomic) BOOL hasInterfaceProductID;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteInterfaceProductID;
- (void)deleteInterfaceVendorID;

@end
