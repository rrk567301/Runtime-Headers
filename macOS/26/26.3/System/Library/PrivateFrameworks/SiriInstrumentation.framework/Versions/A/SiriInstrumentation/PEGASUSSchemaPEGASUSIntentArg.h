@class NSString, NSData, PEGASUSSchemaPEGASUSEntityInfo;

@interface PEGASUSSchemaPEGASUSIntentArg : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (copy, nonatomic) NSString *attributeType;
@property (nonatomic) BOOL hasAttributeType;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSEntityInfo *entity;
@property (nonatomic) BOOL hasEntity;
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
- (void)deleteAttributeType;
- (void)deleteEntity;

@end
