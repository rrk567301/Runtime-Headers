@class NSData, USPSchemaUSPMeasurementContext, SISchemaUUID;

@interface USPSchemaUSPClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *uspId;
@property (nonatomic) char hasUspId;
@property (retain, nonatomic) USPSchemaUSPMeasurementContext *context;
@property (nonatomic) char hasContext;
@property (retain, nonatomic) SISchemaUUID *sutFingerprint;
@property (nonatomic) char hasSutFingerprint;
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
- (void)deleteContext;
- (void)deleteSutFingerprint;
- (void)deleteUspId;
- (id)suppressMessageUnderConditions;

@end
