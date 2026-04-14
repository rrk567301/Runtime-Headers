@class NSString, NSData;

@interface UAFSchemaUAFAssetUsageAlias : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *aliasName;
@property (nonatomic) BOOL hasAliasName;
@property (copy, nonatomic) NSString *aliasValue;
@property (nonatomic) BOOL hasAliasValue;
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
- (void)deleteAliasName;
- (void)deleteAliasValue;

@end
