@class NSData, FLOWSchemaFLOWEntityContext;

@interface FLOWSchemaFLOWPlatformContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWEntityContext *entityContext;
@property (nonatomic) BOOL hasEntityContext;
@property (retain, nonatomic) FLOWSchemaFLOWEntityContext *entityContextValue;
@property (nonatomic) BOOL hasEntityContextValue;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPlatformcontext;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntityContext;
- (void)deleteEntityContextValue;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
