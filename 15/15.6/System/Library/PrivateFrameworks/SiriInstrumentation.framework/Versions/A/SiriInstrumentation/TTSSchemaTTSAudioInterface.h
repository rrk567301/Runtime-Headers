@class NSString, NSData;

@interface TTSSchemaTTSAudioInterface : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *vendorId;
@property (nonatomic) char hasVendorId;
@property (copy, nonatomic) NSString *productId;
@property (nonatomic) char hasProductId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteProductId;
- (void)deleteVendorId;
- (id)suppressMessageUnderConditions;

@end
