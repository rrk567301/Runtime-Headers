@class NSData, FLOWSchemaFLOWEntityContext;

@interface FLOWSchemaFLOWPlatformContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWEntityContext *entityContext;
@property (nonatomic) BOOL hasEntityContext;
@property (retain, nonatomic) FLOWSchemaFLOWEntityContext *entityContextValue;
@property (nonatomic) BOOL hasEntityContextValue;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPlatformcontext;

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
- (void)deleteEntityContext;
- (void)deleteEntityContextValue;

@end
