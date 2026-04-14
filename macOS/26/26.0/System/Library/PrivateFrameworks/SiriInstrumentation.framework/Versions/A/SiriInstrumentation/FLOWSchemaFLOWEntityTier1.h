@class NSString, NSData;

@interface FLOWSchemaFLOWEntityTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *entityId;
@property (nonatomic) BOOL hasEntityId;
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
- (void)deleteEntityId;

@end
