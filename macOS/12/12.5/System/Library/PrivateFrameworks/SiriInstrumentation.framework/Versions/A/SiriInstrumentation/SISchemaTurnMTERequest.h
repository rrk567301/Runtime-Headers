@class NSData, SISchemaUUID;

@interface SISchemaTurnMTERequest : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *mteRequestId;
@property (nonatomic) BOOL hasMteRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMteRequestId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
