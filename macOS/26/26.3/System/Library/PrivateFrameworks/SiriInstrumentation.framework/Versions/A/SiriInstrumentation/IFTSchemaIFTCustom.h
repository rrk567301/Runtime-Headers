@class NSString, NSData;

@interface IFTSchemaIFTCustom : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (copy, nonatomic) NSString *customTypeName;
@property (nonatomic) BOOL hasCustomTypeName;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteBundleId;
- (void)deleteCustomTypeName;

@end
