@class NSString, NSData;

@interface UAFSchemaUAFAssetUsageAlias : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *aliasName;
@property (nonatomic) BOOL hasAliasName;
@property (copy, nonatomic) NSString *aliasValue;
@property (nonatomic) BOOL hasAliasValue;
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
- (void)deleteAliasName;
- (void)deleteAliasValue;

@end
