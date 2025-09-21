@class NSString, NSData;

@interface QDSchemaQDEntityType : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) char hasBundleId;
@property (copy, nonatomic) NSString *nameOfTypedValue;
@property (nonatomic) char hasNameOfTypedValue;
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
- (void)deleteNameOfTypedValue;
- (id)suppressMessageUnderConditions;

@end
