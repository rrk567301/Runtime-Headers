@class NSString, NSData;

@interface TTSSchemaTTSAudioInterface : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *vendorId;
@property (nonatomic) BOOL hasVendorId;
@property (copy, nonatomic) NSString *productId;
@property (nonatomic) BOOL hasProductId;
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
- (void)deleteProductId;
- (void)deleteVendorId;

@end
