@class NSData, IDENTITYSchemaIDENTITYIdentityRequestFailed;

@interface IDENTITYSchemaIDENTITYIdentityRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) IDENTITYSchemaIDENTITYIdentityRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteFailed;

@end
