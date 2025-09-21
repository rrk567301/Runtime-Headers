@class NSString, NSData;

@interface UAFSchemaUAFAssetUsageAlias : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *aliasName;
@property (nonatomic) char hasAliasName;
@property (copy, nonatomic) NSString *aliasValue;
@property (nonatomic) char hasAliasValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAliasName;
- (void)deleteAliasValue;
- (id)suppressMessageUnderConditions;

@end
