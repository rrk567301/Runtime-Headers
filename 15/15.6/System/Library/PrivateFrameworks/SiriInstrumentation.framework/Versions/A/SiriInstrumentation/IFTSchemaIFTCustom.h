@class NSString, NSData;

@interface IFTSchemaIFTCustom : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) char hasBundleId;
@property (copy, nonatomic) NSString *customTypeName;
@property (nonatomic) char hasCustomTypeName;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteBundleId;
- (void)deleteCustomTypeName;
- (id)suppressMessageUnderConditions;

@end
