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
- (void)deleteKey;
- (void)deleteDescription;
- (void)deleteEntityType;
- (void)deleteName;

@end
