@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSKGQAQualifierTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *propId;
@property (nonatomic) BOOL hasPropId;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL hasValue;
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
- (void)deletePropId;
- (void)deleteValue;

@end
