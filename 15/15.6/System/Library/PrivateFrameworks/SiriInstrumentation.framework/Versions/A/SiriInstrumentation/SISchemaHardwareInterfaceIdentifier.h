@class NSString, NSData;

@interface SISchemaHardwareInterfaceIdentifier : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *interfaceVendorID;
@property (nonatomic) char hasInterfaceVendorID;
@property (copy, nonatomic) NSString *interfaceProductID;
@property (nonatomic) char hasInterfaceProductID;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteInterfaceProductID;
- (void)deleteInterfaceVendorID;
- (id)suppressMessageUnderConditions;

@end
