@class NSString, NSData;

@interface TTSSchemaTTSAudioInterface : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *vendorId;
@property (nonatomic) BOOL hasVendorId;
@property (copy, nonatomic) NSString *productId;
@property (nonatomic) BOOL hasProductId;
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
- (void)deleteProductId;
- (void)deleteVendorId;

@end
