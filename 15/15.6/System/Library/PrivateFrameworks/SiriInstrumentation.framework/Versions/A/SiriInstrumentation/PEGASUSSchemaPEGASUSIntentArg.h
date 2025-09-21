@class NSString, NSData, PEGASUSSchemaPEGASUSEntityInfo;

@interface PEGASUSSchemaPEGASUSIntentArg : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) char hasKey;
@property (copy, nonatomic) NSString *attributeType;
@property (nonatomic) char hasAttributeType;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSEntityInfo *entity;
@property (nonatomic) char hasEntity;
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
- (void)deleteAttributeType;
- (void)deleteEntity;
- (id)suppressMessageUnderConditions;

@end
