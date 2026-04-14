@class NSData, USPSchemaUSPMeasurementContext, SISchemaUUID;

@interface USPSchemaUSPClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *uspId;
@property (nonatomic) BOOL hasUspId;
@property (retain, nonatomic) USPSchemaUSPMeasurementContext *context;
@property (nonatomic) BOOL hasContext;
@property (retain, nonatomic) SISchemaUUID *sutFingerprint;
@property (nonatomic) BOOL hasSutFingerprint;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)deleteContext;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSutFingerprint;
- (void)deleteUspId;

@end
