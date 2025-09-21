@class NSString, QDSchemaQDEntityType, NSData;

@interface QDSchemaQDToolParameterDefinition : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) char hasKey;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (retain, nonatomic) QDSchemaQDEntityType *entityType;
@property (nonatomic) char hasEntityType;
@property (copy, nonatomic) NSString *description;
@property (nonatomic) char hasDescription;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteKey;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDescription;
- (void)deleteEntityType;
- (void)deleteName;
- (id)suppressMessageUnderConditions;

@end
