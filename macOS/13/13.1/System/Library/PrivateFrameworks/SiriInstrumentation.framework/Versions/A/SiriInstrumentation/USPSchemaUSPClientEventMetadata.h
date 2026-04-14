@class NSData, USPSchemaUSPMeasurementContext, SISchemaUUID;

@interface USPSchemaUSPClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *uspId;
@property (nonatomic) BOOL hasUspId;
@property (retain, nonatomic) USPSchemaUSPMeasurementContext *context;
@property (nonatomic) BOOL hasContext;
@property (retain, nonatomic) SISchemaUUID *sutFingerprint;
@property (nonatomic) BOOL hasSutFingerprint;
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
- (void)deleteContext;
- (void)deleteUspId;
- (void)deleteSutFingerprint;

@end
