@class NSData, USPSchemaUSPMeasurementContext, SISchemaUUID;

@interface USPSchemaUSPClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *uspId;
@property (nonatomic) BOOL hasUspId;
@property (retain, nonatomic) USPSchemaUSPMeasurementContext *context;
@property (nonatomic) BOOL hasContext;
@property (retain, nonatomic) SISchemaUUID *sutFingerprint;
@property (nonatomic) BOOL hasSutFingerprint;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteContext;
- (void)deleteSutFingerprint;
- (void)deleteUspId;

@end
