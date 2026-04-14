@class NSData, SISchemaUUID;

@interface RFSchemaRFGClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *rfId;
@property (nonatomic) BOOL hasRfId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteRfId;

@end
