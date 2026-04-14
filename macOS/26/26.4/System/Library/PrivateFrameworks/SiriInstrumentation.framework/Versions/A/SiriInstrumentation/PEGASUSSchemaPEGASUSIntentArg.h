@class NSString, NSData, PEGASUSSchemaPEGASUSEntityInfo;

@interface PEGASUSSchemaPEGASUSIntentArg : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (copy, nonatomic) NSString *attributeType;
@property (nonatomic) BOOL hasAttributeType;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSEntityInfo *entity;
@property (nonatomic) BOOL hasEntity;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteKey;
- (void)deleteAttributeType;
- (void)deleteEntity;

@end
