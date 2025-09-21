@class NSString, NSData;

@interface FLOWSchemaFLOWEntityTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *entityId;
@property (nonatomic) char hasEntityId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEntityId;
- (id)suppressMessageUnderConditions;

@end
