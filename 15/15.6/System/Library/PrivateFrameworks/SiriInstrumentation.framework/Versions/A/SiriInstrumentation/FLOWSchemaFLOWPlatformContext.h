@class NSData, FLOWSchemaFLOWEntityContext;

@interface FLOWSchemaFLOWPlatformContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWEntityContext *entityContext;
@property (nonatomic) char hasEntityContext;
@property (retain, nonatomic) FLOWSchemaFLOWEntityContext *entityContextValue;
@property (nonatomic) char hasEntityContextValue;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPlatformcontext;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEntityContext;
- (void)deleteEntityContextValue;
- (id)suppressMessageUnderConditions;

@end
