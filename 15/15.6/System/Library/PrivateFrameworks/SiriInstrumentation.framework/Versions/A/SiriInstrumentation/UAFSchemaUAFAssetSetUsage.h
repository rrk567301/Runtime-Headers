@class NSString, NSData;

@interface UAFSchemaUAFAssetSetUsage : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *usageName;
@property (nonatomic) char hasUsageName;
@property (copy, nonatomic) NSString *usageValue;
@property (nonatomic) char hasUsageValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUsageName;
- (void)deleteUsageValue;
- (id)suppressMessageUnderConditions;

@end
