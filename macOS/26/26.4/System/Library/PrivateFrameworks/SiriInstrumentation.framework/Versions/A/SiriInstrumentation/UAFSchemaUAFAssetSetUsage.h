@class NSString, NSData;

@interface UAFSchemaUAFAssetSetUsage : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *usageName;
@property (nonatomic) BOOL hasUsageName;
@property (copy, nonatomic) NSString *usageValue;
@property (nonatomic) BOOL hasUsageValue;
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
- (void)deleteUsageName;
- (void)deleteUsageValue;

@end
