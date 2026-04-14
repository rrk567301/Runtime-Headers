@class NSString, NSData;

@interface UAFSchemaUAFAssetSetUsage : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *usageName;
@property (nonatomic) BOOL hasUsageName;
@property (copy, nonatomic) NSString *usageValue;
@property (nonatomic) BOOL hasUsageValue;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteUsageName;
- (void)deleteUsageValue;

@end
