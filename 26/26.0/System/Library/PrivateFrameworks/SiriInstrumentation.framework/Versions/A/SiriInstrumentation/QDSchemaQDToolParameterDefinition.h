@class NSString, QDSchemaQDEntityType, NSData;

@interface QDSchemaQDToolParameterDefinition : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (retain, nonatomic) QDSchemaQDEntityType *entityType;
@property (nonatomic) BOOL hasEntityType;
@property (copy, nonatomic) NSString *description;
@property (nonatomic) BOOL hasDescription;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteKey;
- (void)deleteDescription;
- (void)deleteEntityType;
- (void)deleteName;

@end
